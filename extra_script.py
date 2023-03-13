import os
Import("env")

# Access to global construction environment
build_tag = env['PIOENV']
version_tag = os.getenv("FIRMWARE_VERSION")

env.Replace(PROGNAME="firmware_%s_%s" % (build_tag, version_tag))