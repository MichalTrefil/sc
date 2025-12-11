#include "Screen.h"

Screen::Screen()
: u8g2(U8G2_R0, U8X8_PIN_NONE, 6, 5) // SCL=6, SDA=5
{}

void Screen::begin() {
    u8g2.begin();
    u8g2.clearBuffer();
    u8g2.setFont(u8g2_font_ncenB08_tr);
    u8g2.sendBuffer();
}

void Screen::showText(const char* text, uint8_t x, uint8_t y) {
    u8g2.clearBuffer();
    u8g2.drawStr(x, y, text);
    u8g2.sendBuffer();
}

void Screen::drawPixel(uint8_t x, uint8_t y) {
    u8g2.drawPixel(x, y);
}

void Screen::drawLine(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2) {
    u8g2.drawLine(x1, y1, x2, y2);
}

void Screen::drawBox(uint8_t x, uint8_t y, uint8_t w, uint8_t h) {
    u8g2.drawBox(x, y, w, h);
}

void Screen::drawFrame(uint8_t x, uint8_t y, uint8_t w, uint8_t h) {
    u8g2.drawFrame(x, y, w, h);
}

void Screen::drawCircle(uint8_t x, uint8_t y, uint8_t r) {
    u8g2.drawCircle(x, y, r, U8G2_DRAW_ALL);
}

void Screen::send() {
    u8g2.sendBuffer();
}

void Screen::clear() {
    u8g2.clearBuffer();
    u8g2.sendBuffer();
}
