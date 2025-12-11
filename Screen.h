#pragma once
#include <U8g2lib.h>

class Screen {
public:
    Screen();  // konstruktor
    void begin();   // inicializace displeje
    void showText(const char* text, uint8_t x = 0, uint8_t y = 10); // vykreslení textu
    void drawPixel(uint8_t x, uint8_t y);       // kreslí pixel
    void drawLine(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2); // kreslí čáru
    void drawBox(uint8_t x, uint8_t y, uint8_t w, uint8_t h); // plný obdélník
    void drawFrame(uint8_t x, uint8_t y, uint8_t w, uint8_t h); // obrys obdélníku
    void drawCircle(uint8_t x, uint8_t y, uint8_t r); // kruh
    void send();    // pošle buffer na displej
    void clear();   // vyčistí displej

private:
    U8G2_SSD1306_72X40_ER_F_HW_I2C u8g2;
};
