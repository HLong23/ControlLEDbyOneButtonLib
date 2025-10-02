# Dự án: Điều khiển LED bằng nút nhấn (Arduino + OneButton)

## Mô tả
Dự án này sử dụng thư viện [OneButton] để điều khiển LED thông qua một nút bấm duy nhất.

- **Single Click**: Bật/Tắt LED (chế độ ON/OFF).
- **Double Click**: LED chuyển sang chế độ nhấp nháy với chu kỳ 200ms.

Thư viện `LED.h` được sử dụng để quản lý trạng thái LED:
- `led.off()` → tắt LED.
- `led.flip()` → đảo trạng thái LED.
- `led.blink(x)` → cho LED nhấp nháy với chu kỳ `x` ms.
- `led.loop()` → duy trì hoạt động của LED.

## Phần cứng
- Vi điều khiển: ESP32.
- 1 nút bấm và LED có sẵn trên board
