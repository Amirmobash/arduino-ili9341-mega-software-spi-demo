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

void loop() {}
