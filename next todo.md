## CDC Enable Status
- [x] Solusi CDC On Boot di PlatformIO: Gunakan `build_flags` (bukan `board_flags`) dengan opsi:
```ini
build_flags =
    -DARDUINO_USB_CDC_ON_BOOT=1
    -DARDUINO_USB_MODE=1
```
- [x] Seri tutorial lengkap telah ditambahkan ke `README.md`.