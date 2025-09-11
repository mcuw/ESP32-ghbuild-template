# ESP32 project template

## Description

This is a project template to create microcontroller apps with automatized firmware builds for [esp32](https://www.espressif.com/en/products/socs/esp32), [esp32s2](https://www.espressif.com/en/products/socs/esp32-s2) and [esp32s3](https://www.espressif.com/en/products/socs/esp32-s3) microcontroller boards. It uses for that [GitHub Actions](https://github.com/features/actions) and [platformio](https://platformio.org/). Use this repository as a template for your own esp32 projects.

## Requirements

- [GitHub Actions](https://github.com/features/actions)
- [platformio](https://platformio.org/)
- [python](https://www.python.org/)

## GitHub Actions - Workflow

The release build happens in the `build & release` workflow: [build_release.yml](.github/workflows/build_release.yml).
It creates a release, after creation of a new git tag (named it like `v1.0.0`).

If you want to test the build on all merge w/o creating a tag then the `build` workflow is what you looking for: [build.yml](.github/workflows/build.yml)

## PlatformIO

[PlatformIO](https://platformio.org/) is a tool to create microcontroller apps for arduino platforms and compatibles (esp32). You can install the [Visual Studio Code extension](https://platformio.org/install/ide?install=vscode) in the [Visual Studio Code](https://code.visualstudio.com/) IDE.

## Python

There is a tiny python script needed to customize the firmware filenames within platformio, see documentation: https://docs.platformio.org/en/stable/scripting/examples/custom_program_name.html

The [extra_script.py](extra_script.py) script gets the platformio env (e.g. lolin32) and the git-tag for the firmware filename.
This is required to publish several firmware names in the github artifacts of a release.

## Get Started

<img src="doc/create-new-project-with-template.png" />

1. Login to github

2. Click on `Use this template` to create a new git repository
3. Implement your application in the [src/main.cpp](src/main.cpp)
4. Comment your new change in the [CHANGELOG.md](CHANGELOG.md) file
5. Push your changes

```sh
git add .
```

```sh
git commit -am "my app"
```

```sh
git push -u origin main
```

5. Create a new tag to trigger a release, e.g. for v1.0.0

```sh
git tag v1.0.0
```

```sh
git push origin v1.0.0
```

6. You can find your firmwares under `Releases` after the CI build finished

## CHANGELOG

You can write your changes in the [CHANGELOG.md](CHANGELOG.md) before you create a release. It will be shown under the release page.

## Example Release

see [Releases](https://github.com/mcuw/esp-ghbuild-template/releases) on the right sidemenu.

## Customize your project

You can reduce and adapt your required boards in the [platformio.ini](platformio.ini).

Update the [CHANGELOG.md](CHANGELOG.md) file before you are creating a new release. By creating a new git tag you trigger a new release which generate for you the firmwares.

## Supported boards

Buy on AliExpress (affiliate links) ...

- ESP32
  - [LILYGO T-Beam](https://s.click.aliexpress.com/e/_DBzslDV) with LoRA
  - lolin32
  - lolin D32 pro
- ESP32 S2
- ESP32 S3
  - [LILYGO T-Display S3](https://s.click.aliexpress.com/e/_DBmOMkn)
  - [LILYGO T-Display-S3 AMOLED](https://s.click.aliexpress.com/e/_DmboYpZ)
  - [LILYGO T-Display-S3 Touch](https://s.click.aliexpress.com/e/_DCBgPlV)
  - [LILYGO T-Display S3 Long](https://s.click.aliexpress.com/e/_Dl6UVMx)
  - [LilyGo T-Watch S3](https://s.click.aliexpress.com/e/_DEZVvH1)
  - [LilyGo T-CameraPlus ESP32-S3](https://s.click.aliexpress.com/e/_DkytBeT)
  - [LilyGo T-RGB](https://s.click.aliexpress.com/e/_Dem6i0b)
  - [LilyGo T-Deck](https://s.click.aliexpress.com/e/_DBPnZmL)
  - [LilyGo T-Deck Plus](https://s.click.aliexpress.com/e/_DDeskaP)

- ESP32 C6 with WiFi 6 and BT-5 LE
  - [NanoESP32-C6](https://s.click.aliexpress.com/e/_ooBtUih) with 16MB flash
  - [ESP32-C6](https://s.click.aliexpress.com/e/_DeLjVMb) with 4MB flash and W2812 RGB LED
  - [LILYGO T-QT C6](https://github.com/mcuw/esp32-t-qt-c6-sdk) with 4 MB flash, touch display, 6-Axis Sensor

## Disclaimer

Contribution and help - if you find an issue or wants to contribute then please do not hesitate to create a pull request or an issue.

We provide our build template as is, and we make no promises or guarantees about this code.
