## CDC enable
- Belum tahu cara menampilkan CDC enable walapun konfigurasi platfromio sudah sepert ini
```
[env:serialtest]
platform = espressif32
board = esp32-c3-devkitc-02
framework = arduino
monitor_speed = 9600
board_flags =
   -DARDUINO_USB_CDC_ON_BOOT=1
```