# Arduino Playground

This repo has some Arduino examples.

### Links to designs

- [Push button](https://www.tinkercad.com/things/b6U6aTtOpR8)
- [Temperature sensor](https://www.tinkercad.com/things/5e2y0KmxKh2)

### Visual Code Plugin Config

- Install [C++ Visual Code Plugin](https://github.com/microsoft/vscode-cpptools)
- Install [Arduino IDE](https://www.arduino.cc/en/software)
- Install [Visual Code Arduino Plugin](https://github.com/microsoft/vscode-arduino)
- At the project root, create the file `.vscode/c_pp_properties.json` with the following content:

```json
{
    "configurations": [
        {
            "name": "Mac",
            "includePath": [
                "${workspaceFolder}/**"
            ],
            "defines": [],
            "macFrameworkPath": [],
            "compilerPath": "/usr/local/bin/gcc-10",
            "cStandard": "gnu17",
            "cppStandard": "gnu++14",
            "intelliSenseMode": "macos-gcc-x64",
            "browse": {
                "path": [
                    "/Applications/Arduino.app/Contents/Java/hardware",
                    "/Applications/Arduino.app/Contents/Java/libraries"
                ]
            }
        }
    ],
    "version": 4
}
```

(This is the MacOS version, Windows and Linux versions may have different values, see this [issue](https://github.com/microsoft/vscode-arduino/issues/438)).

To switch between sketches, modify the `.vscode/arduino.json` file.

In this example, you need to change the `sketch` property.

```json
{
    "board": "arduino:avr:uno",
    "programmer": "avrisp",
    "sketch": "push-button/push-button.ino"
}
```
