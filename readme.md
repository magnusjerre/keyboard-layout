# Notes

```
Keyboard=omkbd/ergodash/mini
Location=qmk_firmware/keyboards/omkbd/ergodash/mini/keymaps/jerre/
```

## Downloads

- __QMK MSYS__: https://github.com/qmk/qmk_distro_msys/releases
- __QMK Toolbox__: https://github.com/qmk/qmk_toolbox

## Setup
```bash
$ qmk setup
$ qmk config user.keymap=jerre
$ qmk config user.keyboard=omkbd/ergodash/min

# Creates the layout at qmk_firmware/keyboards/omkbd/ergodash/mini/keymaps/jerre/
$ qmk new-keymap -kb omkbd/ergodash/mini
```

## Compiling

```
# Replace the content of folder created above with the cloned content from this repo, then compile
# to generate the file qmk_firmware/omkbd_ergodash_mini_jerre.hex
$ qmk compile # Alternatively: qmk compile -kb omkbd/ergodash/mini -km jerre

# To create a json-variant which can be viewed in QMK online:
$ qmk c2json > omkbd_ergodash_mini_jerre.json
```

## Uploading firmware to the keyboard, Qmk Toolbox
Open QMK Toolbox, ensure ATmega32U4 is selected (pro micro controller, ATMEL MEGA 32U4-MU), and check "Auto-flash". On the keyboard, double click the little white reset button.
