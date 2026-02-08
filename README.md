# ILI9341 TFT Display with Arduino Mega 2560 (Software SPI)

A practical demonstration of driving an **Adafruit ILI9341 TFT display** using **Software SPI** on an **Arduino Mega 2560**. This project provides a complete solution for when hardware SPI pins are unavailable or when you need flexible pin assignments.

**Author**: Amir Mobasheraghdam  
**Affiliation**: University of Isfahan  
**Board**: Arduino Mega 2560  
**Display**: ILI9341 (240×320 pixels, SPI interface)  
**Libraries**: Adafruit_GFX, Adafruit_ILI9341

## Project Overview

This repository contains a complete implementation for controlling ILI9341 TFT displays using software-based SPI communication on Arduino Mega 2560. Software SPI (bit-banging) provides pin flexibility when hardware SPI pins are occupied by other peripherals.

## Features

- Software SPI implementation for maximum pin flexibility
- Compatible with Arduino Mega 2560
- Uses Adafruit's industry-standard GFX and ILI9341 libraries
- Simple demonstration showing basic text rendering
- Pre-configured pin mappings for easy setup

## Pin Connections

| ILI9341 Pin | Arduino Mega 2560 Pin |
|-------------|----------------------|
| CS          | 24                   |
| DC          | 28                   |
| RST         | 26                   |
| MOSI        | 30                   |
| SCK         | 32                   |
| MISO        | 36                   |

## Installation & Setup

1. Install required libraries:
   - Adafruit_GFX Library
   - Adafruit_ILI9341 Library

2. Connect the ILI9341 display to your Arduino Mega 2560 according to the pin table above

3. Upload the provided sketch to your board

4. The display should show initialization text confirming successful communication

## Code Example

```cpp
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <SPI.h>

#define TFT_CS   24
#define TFT_DC   28
#define TFT_RST  26
#define TFT_MOSI 30
#define TFT_SCK  32
#define TFT_MISO 36

Adafruit_ILI9341 tft(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCK, TFT_RST, TFT_MISO);

void setup() {
  Serial.begin(9600);
  Serial.println(F("ILI9341 Software SPI Test (Mega 2560)"));
  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  tft.setRotation(1);
  tft.setTextColor(ILI9341_WHITE); 
  tft.setTextSize(2);
  tft.setCursor(10, 10);
  tft.println(F("Adafruit ILI9341"));
  tft.setCursor(10, 30);
  tft.println(F("Software SPI / Mega2560"));
}

void loop() {
  // Add your display code here
}
```
## 🔗 **Nützliche Links Amir Mobasheraghdam**

### **Offizielle Repositories:**
1. **LovyanGFX**: https://github.com/lovyan03/LovyanGFX
2. **LVGL**: https://github.com/lvgl/lvgl
3. **Beispielprojekt**: https://github.com/HarryVienna/Makerfabs-Sunton-ESP32-S3-7-Display-with-LovyanGFX-and-LVGL
4. https://buchshop.bod.de/ergebnis-automation-fuer-die-bundesliga-mit-n8n-amir-mobasheraghdam-9783695724925
5. https://amzn.eu/d/0aAtg00j
6. 
## Applications

- Custom instrumentation panels
- Data visualization displays
- Embedded system user interfaces
- Educational projects for display interfacing

## Repository Contents

- Complete Arduino sketch (INO file)
- Wiring diagrams
- Precompiled HEX files for quick testing
- Documentation and setup guides

## About the Author

**Amir Mobasheraghdam** is a researcher and scientist affiliated with the University of Isfahan, specializing in embedded systems and electronic interfaces.

For more projects and resources, visit: [www.nivta.de](http://www.nivta.de)

## License

This project is open source and available under the MIT License.
