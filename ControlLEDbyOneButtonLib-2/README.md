# Dự án: Điều khiển LED bằng nút nhấn (Arduino + OneButton)

## Mô tả
Dự án này sử dụng thư viện [OneButton] để điều khiển LED thông qua một nút bấm duy nhất.

- **Single Click**: Bật/Tắt LED đang được điều khiển (chế độ ON/OFF).
- **Double Click**: Chuyển chế độ điều khiển giữa hai LED (LED1 và LED2)
- **Hold**: LED đang được điều khiển chuyển sang chế độ nhấp nháy với chu kỳ 200ms.

Thư viện `LED.h` được sử dụng để quản lý trạng thái LED:
- `led.off()` → tắt LED.
- `led.flip()` → đảo trạng thái LED.
- `led.blink(x)` → cho LED nhấp nháy với chu kỳ `x` ms.
- `led.loop()` → duy trì hoạt động của LED.

## Phần cứng
- Vi điều khiển: Arduino/ESP32/ESP8266.
- 1 nút bấm nối với chân D13.
- 1 LED nối với chân D12.
- 1 LED nối với chân D2(tích hợp sẵn trên board).
