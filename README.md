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

1. Create a new git repository and use this [repository](https://github.com/mcuw/ESP32-ghbuild-template) as its template
2. Implement your application in the [src/main.cpp](src/main.cpp)
3. Comment your new change in the [CHANGELOG.md](CHANGELOG.md) file
4. Push your changes

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

6. You can find your firmwares under [Releases](releases)

## CHANGELOG

You can write your changes in the [CHANGELOG.md](CHANGELOG.md) before you create a release. It will be shown under the release page.

## Example Release

see [Releases](https://github.com/mcuw/esp-ghbuild-template/releases) on the right sidemenu.

## Customize your project

You can reduce and adapt your required boards in the [platformio.ini](platformio.ini).

Update the [CHANGELOG.md](CHANGELOG.md) file before you are creating a new release. By creating a new git tag you trigger a new release which generate for you the firmwares.

## Disclaimer

Contribution and help ... if you find an issue or wants to contribute then please do not hesitate to create a merge request or an issue.

We provide our build template as is, and we make no promises or guarantees about this code.
