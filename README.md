# ESP32_2DISTANCESENSOR+1MICROSERVOSG90

| HC-SRO4    | ESP32       |
|------------|-------------|
| VCC        | 3V3         |
| TRIG       | D4          |
| ECHO       | D2          |
| GND        | GND         |

| HC-SRO4    | ESP32       |
|------------|-------------|
| VCC        | VIN         |
| TRIG       | D32         |
| ECHO       | D33         |
| GND        | GND         |

| SERVO-SG90 | ESP32       |
|------------|-------------|
| POWER      | VIN         |
| SIGNAL     | D12         |
| GND        | GND         |



I used 1 ESP32, 2 distance sensors (HC-SR04), and 1 servo motor. When distance sensor 1 and distance sensor 2 detect objects, they output the distance information on the screen. When distance sensor 1 detects objects at 20 cm and below, it rotates my servo motor 90 degrees at 1-second intervals



https://github.com/senanurincekara/ESP32_2DISTANCESENSOR-1MICROSERVOSG90/assets/97362569/316a887d-1d76-4680-82f8-8019875d1509

