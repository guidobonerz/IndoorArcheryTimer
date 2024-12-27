#pragma once
#include <Adafruit_GFX.h>
const uint8_t Digi10x16Bitmaps[] PROGMEM = {
0x7e,0xbf,0xb0,0x0f,0x03,0xc0,0xf0,0x38,0x0e,0x01,0x80,0x70,
0x1c,0x0f,0x03,0xc0,0xc0,0x3f,0xed,0xfa,0x00,0x80,0x30,0x0c,
0x03,0x00,0xc0,0x30,0x0c,0x01,0x00,0x40,0x10,0x0c,0x03,0x00,
0xc0,0x30,0x0c,0x02,0x7e,0xbf,0xb0,0x0c,0x03,0x00,0xc0,0x30,
0x0c,0xf9,0x9f,0x30,0x0c,0x03,0x00,0xc0,0x00,0x0f,0xe1,0xf8,
0x7e,0xbf,0xb0,0x0c,0x03,0x00,0xc0,0x30,0x0c,0xf9,0x1f,0x40,
0x10,0x0c,0x03,0x00,0xc0,0x3f,0xed,0xfa,0x00,0x80,0x30,0x0f,
0x03,0xc0,0xf0,0x38,0x0e,0xf9,0x1f,0x40,0x10,0x0c,0x03,0x00,
0xc0,0x30,0x0c,0x02,0x7e,0x3f,0x80,0x03,0x00,0xc0,0x30,0x08,
0x02,0xf8,0x1f,0x40,0x10,0x0c,0x03,0x00,0xc0,0x3f,0xed,0xfa,
0x7e,0x3f,0x80,0x03,0x00,0xc0,0x30,0x08,0x02,0xf8,0x9f,0x70,
0x1c,0x0f,0x03,0xc0,0xc0,0x3f,0xed,0xfa,0x7e,0xbf,0xb0,0x0c,
0x03,0x00,0xc0,0x30,0x0c,0x01,0x00,0x40,0x10,0x0c,0x03,0x00,
0xc0,0x30,0x0c,0x02,0x7e,0xbf,0xb0,0x0f,0x03,0xc0,0xf0,0x38,
0x0e,0xf9,0x9f,0x70,0x1c,0x0f,0x03,0xc0,0xc0,0x3f,0xed,0xfa,
0x7e,0xbf,0xb0,0x0f,0x03,0xc0,0xf0,0x38,0x0e,0xf9,0x1f,0x40,
0x10,0x0c,0x03,0x00,0xc0,0x3f,0xed,0xfa,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
const GFXglyph Digi10x16Glyphs[] PROGMEM = {
{0, 10, 16, 11, 0, 0},
{20, 10, 16, 11, 0, 0},
{40, 10, 16, 11, 0, 0},
{60, 10, 16, 11, 0, 0},
{80, 10, 16, 11, 0, 0},
{100, 10, 16, 11, 0, 0},
{120, 10, 16, 11, 0, 0},
{140, 10, 16, 11, 0, 0},
{160, 10, 16, 11, 0, 0},
{180, 10, 16, 11, 0, 0}};
const GFXfont Digi10x16 PROGMEM = {(uint8_t *)Digi10x16Bitmaps,(GFXglyph *)Digi10x16Glyphs, 48, 58, 17};