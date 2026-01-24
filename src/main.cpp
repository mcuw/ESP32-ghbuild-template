#include <WiFi.h>
#include <DNSServer.h>
#include <WebServer.h>

const byte DNS_PORT = 53;
IPAddress apIP(192,168,4,1);

DNSServer dnsServer;
WebServer webServer(80);

String portalPage = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Network Warning</title>
<style>
body{
  margin:0;
  background:black;
  color:red;
  font-family:monospace;
}
#box{padding:15px;}
#bar{height:18px;width:0;background:red;}
#frame{border:1px solid red;}
.flash{animation:f 1s infinite;}
@keyframes f{50%{background:#300;}}
</style>
</head>
<body class="flash">
<div id="box">
<h2>⚠ NETWORK WARNING ⚠</h2>
<p>Weak data integrity detected</p>
<div id="frame"><div id="bar"></div></div>
<p id="s">Analyzing… 0%</p>
</div>

<script>
let p=0;
setInterval(()=>{
  p++;
  document.getElementById("bar").style.width=p+"%";
  document.getElementById("s").innerHTML="Analyzing… "+p+"%";
  if(p>=100){
    document.getElementById("s").innerHTML=
      "Connection unstable. Please disconnect.";
  }
},120);
</script>
</body>
</html>
)rawliteral";

void handlePortal(){
  webServer.send(200,"text/html",portalPage);
}

void setup(){
  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIP,apIP,IPAddress(255,255,255,0));
  WiFi.softAP("Free WiFi");

  dnsServer.start(DNS_PORT,"*",apIP);

  // Android captive check
  webServer.on("/generate_204", handlePortal);
  webServer.on("/gen_204", handlePortal);

  // Apple captive check
  webServer.on("/hotspot-detect.html", handlePortal);

  // Default
  webServer.onNotFound(handlePortal);

  webServer.begin();
}

void loop(){
  dnsServer.processNextRequest();
  webServer.handleClient();
}
