const unsigned char f1 [] = {
0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x00, 0xFC, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0xFC, 0x00, 0xF0, 0x00,
0x00, 0x3E, 0x00, 0x00, 0x07, 0x80, 0x7C, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x70, 0x1E, 0x00,
0x00, 0xF0, 0x00, 0x00, 0x00, 0x1C, 0x0F, 0x00, 0x01, 0xE0, 0x3F, 0x00, 0x70, 0x06, 0x07, 0x00,
0x01, 0xC1, 0xFF, 0xE0, 0x3F, 0x03, 0x03, 0x80, 0x03, 0x83, 0xFF, 0xF0, 0x01, 0xC0, 0x81, 0xC0,
0x07, 0x87, 0xFF, 0xFC, 0x00, 0x30, 0x01, 0xE0, 0x07, 0x0F, 0xFF, 0xFE, 0x00, 0x1C, 0x00, 0xE0,
0x0E, 0x0F, 0xFF, 0xFF, 0x00, 0x06, 0x00, 0x70, 0x1E, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x70,
0x1C, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x38, 0x3C, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x38,
0x38, 0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x7E, 0x1C, 0x38, 0x1F, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0x1C,
0x70, 0x0F, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0x8E, 0x70, 0x07, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0x8E,
0x70, 0x03, 0xFF, 0xC1, 0xC0, 0x0F, 0xFF, 0xCE, 0x60, 0x00, 0x7F, 0x8F, 0xF0, 0x3F, 0xFF, 0xC6,
0xE0, 0x00, 0x0F, 0x1F, 0xF8, 0x7F, 0xFF, 0xC7, 0xE0, 0x00, 0x00, 0x3F, 0xFC, 0x7F, 0xFF, 0xC7,
0xE0, 0x00, 0x00, 0x7F, 0xFE, 0x7F, 0xFF, 0xC7, 0xE0, 0x80, 0x00, 0x7C, 0x3E, 0x3F, 0xFF, 0xC7,
0xE0, 0x88, 0x00, 0x7C, 0x1E, 0x3F, 0xFF, 0xC7, 0xE0, 0x88, 0x00, 0xF8, 0x1F, 0x3F, 0xFF, 0xC7,
0xE0, 0x88, 0x00, 0xF8, 0x1F, 0x3F, 0xFF, 0x87, 0xE0, 0x88, 0x00, 0x78, 0x3E, 0x3F, 0xFF, 0x87,
0xE0, 0x88, 0x00, 0x7E, 0x7E, 0x3F, 0xFF, 0x07, 0xE0, 0x8C, 0x00, 0x7F, 0xFE, 0x7F, 0xFE, 0x07,
0xE0, 0x84, 0x00, 0x3F, 0xFC, 0x7F, 0xFC, 0x07, 0xE0, 0xC4, 0x03, 0x1F, 0xF8, 0xFF, 0xF0, 0x06,
0x60, 0x46, 0x03, 0x8F, 0xF1, 0xFF, 0xE0, 0x06, 0x70, 0x42, 0x07, 0xC1, 0x80, 0x7E, 0x00, 0x0E,
0x70, 0x62, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x0E, 0x70, 0x21, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x0E,
0x38, 0x21, 0x0F, 0xFF, 0xC0, 0x00, 0x20, 0x1C, 0x38, 0x10, 0x8F, 0xFF, 0xE0, 0x00, 0x42, 0x1C,
0x1C, 0x18, 0x0F, 0xFF, 0xE0, 0x00, 0xC2, 0x3C, 0x1C, 0x08, 0x0F, 0xFF, 0xE0, 0x01, 0x86, 0x38,
0x0E, 0x04, 0x0F, 0xFF, 0xF0, 0x03, 0x0C, 0x78, 0x0E, 0x00, 0x0F, 0xFF, 0xF0, 0x06, 0x18, 0x70,
0x07, 0x00, 0x0F, 0xFF, 0xF8, 0x0C, 0x10, 0xE0, 0x07, 0x80, 0x0F, 0xFF, 0xF8, 0x18, 0x21, 0xE0,
0x03, 0x80, 0x07, 0xFF, 0xF8, 0x60, 0xC1, 0xC0, 0x01, 0xC0, 0x07, 0xFF, 0xF8, 0xC1, 0x83, 0x80,
0x01, 0xE0, 0x07, 0xFF, 0xF8, 0x03, 0x07, 0x80, 0x00, 0xF0, 0x03, 0xFF, 0xF8, 0x0E, 0x0F, 0x00,
0x00, 0x78, 0x01, 0xFF, 0xF8, 0x38, 0x1E, 0x00, 0x00, 0x3E, 0x00, 0xFF, 0xF0, 0x60, 0x7C, 0x00,
0x00, 0x0F, 0x00, 0x7F, 0xE0, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x1F, 0xC0, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00
};

const unsigned char f2 [] = {
0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x00, 0xFC, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
0x00, 0x3E, 0x00, 0x00, 0x07, 0x80, 0x7C, 0x00, 0x00, 0x78, 0x1F, 0xE0, 0x00, 0xF0, 0x1E, 0x00,
0x00, 0xF0, 0x7F, 0xFC, 0x00, 0x18, 0x0F, 0x00, 0x01, 0xE0, 0xFF, 0xFE, 0x00, 0x06, 0x07, 0x80,
0x01, 0xC1, 0xFF, 0xFF, 0x06, 0x03, 0x03, 0x80, 0x03, 0xC1, 0xFF, 0xFF, 0x83, 0xC0, 0xC1, 0xC0,
0x07, 0x83, 0xFF, 0xFF, 0xC0, 0x70, 0x61, 0xE0, 0x07, 0x03, 0xFF, 0xFF, 0xC0, 0x18, 0x20, 0xE0,
0x0E, 0x03, 0xFF, 0xFF, 0xE0, 0x0C, 0x10, 0x70, 0x1E, 0x03, 0xFF, 0xFF, 0xE0, 0x03, 0x08, 0x70,
0x1C, 0x01, 0xFF, 0xFF, 0xF0, 0x01, 0x80, 0x38, 0x3C, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0xC0, 0x38,
0x38, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x1C, 0x38, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x1C,
0x70, 0x00, 0x1F, 0xF8, 0x38, 0x00, 0x00, 0x0E, 0x70, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x0E,
0x70, 0x40, 0x03, 0xC3, 0xC0, 0x00, 0x0E, 0x0E, 0x70, 0xC4, 0x00, 0x8F, 0xF0, 0x00, 0xFF, 0x06,
0xE0, 0x8C, 0x00, 0x1F, 0xF8, 0x03, 0xFF, 0x87, 0xE0, 0x8C, 0x00, 0x3F, 0xFC, 0x07, 0xFF, 0xC7,
0xE0, 0x88, 0x00, 0x7F, 0xFE, 0x1F, 0xFF, 0xC7, 0xE0, 0x88, 0x00, 0x7E, 0x7E, 0x3F, 0xFF, 0xC7,
0xE0, 0x88, 0x00, 0x7C, 0x1F, 0x3F, 0xFF, 0xE7, 0xE0, 0x88, 0x00, 0xF8, 0x1F, 0x3F, 0xFF, 0xE7,
0xE0, 0x88, 0x00, 0xF8, 0x1F, 0x3F, 0xFF, 0xE7, 0xE0, 0x88, 0x00, 0x7C, 0x3F, 0x3F, 0xFF, 0xE7,
0xE0, 0x88, 0x00, 0x7C, 0x7E, 0x3F, 0xFF, 0xC7, 0xE0, 0x8C, 0x06, 0x7F, 0xFE, 0x7F, 0xFF, 0xC7,
0xE0, 0x84, 0x0E, 0x3F, 0xFC, 0x7F, 0xFF, 0x87, 0xE0, 0xC4, 0x1F, 0x1F, 0xF8, 0xFF, 0xFF, 0x87,
0x60, 0x44, 0x1F, 0x8F, 0xF1, 0xFF, 0xFF, 0x0E, 0x70, 0x46, 0x3F, 0xC3, 0x83, 0xFF, 0xFE, 0x0E,
0x70, 0x60, 0x7F, 0xE0, 0x07, 0xFF, 0xFC, 0x0E, 0x70, 0x20, 0x7F, 0xFC, 0x00, 0xFF, 0xF0, 0x0E,
0x38, 0x20, 0x7F, 0xFF, 0x00, 0x1F, 0x80, 0x1C, 0x38, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x1C,
0x1C, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x38, 0x1C, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x38,
0x0E, 0x00, 0x7F, 0xFF, 0x00, 0x01, 0x00, 0x78, 0x0E, 0x00, 0x7F, 0xFF, 0x80, 0x06, 0x00, 0x70,
0x07, 0x00, 0x7F, 0xFF, 0x80, 0x0C, 0x10, 0xE0, 0x07, 0x80, 0x7F, 0xFF, 0x80, 0x38, 0x31, 0xE0,
0x03, 0x80, 0x7F, 0xFF, 0x80, 0x60, 0x61, 0xC0, 0x01, 0xC0, 0x3F, 0xFF, 0x83, 0x81, 0x83, 0x80,
0x01, 0xE0, 0x3F, 0xFF, 0x8E, 0x03, 0x07, 0x80, 0x00, 0xF0, 0x1F, 0xFF, 0x80, 0x0E, 0x0F, 0x00,
0x00, 0x78, 0x0F, 0xFF, 0x00, 0x38, 0x1E, 0x00, 0x00, 0x3E, 0x07, 0xFE, 0x01, 0xE0, 0x7C, 0x00,
0x00, 0x1F, 0x01, 0xFC, 0x0F, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00
};

const unsigned char f3 [] = {
0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0xF8, 0x00, 0x00, 0xF0, 0x00,
0x00, 0x3E, 0x07, 0xFF, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x78, 0x0F, 0xFF, 0x80, 0x00, 0x3E, 0x00,
0x00, 0xF0, 0x1F, 0xFF, 0xC0, 0x18, 0x0F, 0x00, 0x01, 0xE0, 0x3F, 0xFF, 0xE0, 0x0E, 0x07, 0x00,
0x03, 0xC0, 0x3F, 0xFF, 0xF0, 0x03, 0x03, 0x80, 0x03, 0x80, 0x3F, 0xFF, 0xF8, 0x01, 0x81, 0xC0,
0x07, 0x80, 0x3F, 0xFF, 0xF8, 0x60, 0xC1, 0xE0, 0x07, 0x00, 0x3F, 0xFF, 0xFC, 0x18, 0x60, 0xE0,
0x0E, 0x00, 0x1F, 0xFF, 0xFC, 0x0C, 0x10, 0x70, 0x1E, 0x00, 0x1F, 0xFF, 0xFC, 0x06, 0x18, 0x70,
0x1C, 0x00, 0x0F, 0xFF, 0xFE, 0x03, 0x0C, 0x38, 0x3C, 0x10, 0x07, 0xFF, 0xFE, 0x01, 0x84, 0x38,
0x38, 0x10, 0x03, 0xFF, 0xFE, 0x00, 0xC6, 0x1C, 0x38, 0x22, 0x01, 0xFF, 0xFE, 0x00, 0x62, 0x1C,
0x70, 0x62, 0x00, 0xFC, 0x3E, 0x00, 0x23, 0x0E, 0x70, 0x42, 0x00, 0x60, 0x06, 0x00, 0x30, 0x0E,
0x70, 0x46, 0x00, 0x03, 0x82, 0x00, 0x10, 0x0E, 0x60, 0x44, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x0E,
0xE0, 0xC4, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x07, 0xE0, 0x84, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x07,
0xE0, 0x8C, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x07, 0xE0, 0x88, 0x00, 0x7E, 0x7E, 0x00, 0xFE, 0x07,
0xE0, 0x88, 0x00, 0x7C, 0x1F, 0x07, 0xFF, 0x87, 0xE0, 0x88, 0x00, 0xF8, 0x1F, 0x3F, 0xFF, 0x87,
0xE0, 0x88, 0x04, 0xF8, 0x1F, 0x3F, 0xFF, 0xC7, 0xE0, 0x88, 0x1C, 0x7C, 0x3F, 0x3F, 0xFF, 0xC7,
0xE0, 0x88, 0x3C, 0x7E, 0x3E, 0x3F, 0xFF, 0xC7, 0xE0, 0x88, 0x7E, 0x7F, 0xFE, 0x7F, 0xFF, 0xC7,
0xE0, 0x80, 0xFE, 0x3F, 0xFC, 0x7F, 0xFF, 0xC7, 0x60, 0x80, 0xFF, 0x1F, 0xF8, 0xFF, 0xFF, 0xC7,
0x60, 0x01, 0xFF, 0x8F, 0xF1, 0xFF, 0xFF, 0xC6, 0x70, 0x01, 0xFF, 0xC1, 0x83, 0xFF, 0xFF, 0xCE,
0x70, 0x03, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0x8E, 0x70, 0x03, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0x0E,
0x38, 0x03, 0xFF, 0xFC, 0x07, 0xFF, 0xFE, 0x1C, 0x38, 0x03, 0xFF, 0xF8, 0x03, 0xFF, 0xFC, 0x1C,
0x1C, 0x03, 0xFF, 0xF8, 0x00, 0xFF, 0xF8, 0x3C, 0x1C, 0x03, 0xFF, 0xF8, 0x00, 0x1F, 0xC0, 0x38,
0x0E, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x78, 0x0E, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x70,
0x07, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xE0, 0x07, 0x83, 0xFF, 0xF8, 0x00, 0x18, 0x01, 0xE0,
0x03, 0x81, 0xFF, 0xF8, 0x00, 0x70, 0x01, 0xC0, 0x01, 0xC1, 0xFF, 0xF0, 0x03, 0xC0, 0x03, 0x80,
0x00, 0xE0, 0xFF, 0xF1, 0xFE, 0x03, 0x07, 0x80, 0x00, 0xF0, 0x7F, 0xE1, 0xE0, 0x0E, 0x0F, 0x00,
0x00, 0x7C, 0x1F, 0xC0, 0x00, 0x38, 0x1E, 0x00, 0x00, 0x1E, 0x07, 0x00, 0x00, 0xF0, 0x7C, 0x00,
0x00, 0x0F, 0x00, 0x02, 0x3F, 0x80, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x03, 0xF0, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00
};

const unsigned char f4 [] = {
0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x03, 0xFE, 0x00, 0x00,
0x00, 0x00, 0xFE, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x0F, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x7F, 0xE0, 0x00, 0xF8, 0x00,
0x00, 0x3E, 0x00, 0xFF, 0xF0, 0x00, 0x7C, 0x00, 0x00, 0x78, 0x01, 0xFF, 0xF8, 0x00, 0x1E, 0x00,
0x00, 0xF0, 0x03, 0xFF, 0xFC, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x03, 0xFF, 0xFE, 0x00, 0x07, 0x80,
0x01, 0xC0, 0x03, 0xFF, 0xFF, 0x01, 0x03, 0x80, 0x03, 0x80, 0x03, 0xFF, 0xFF, 0x01, 0x81, 0xC0,
0x07, 0x80, 0x01, 0xFF, 0xFF, 0x80, 0x41, 0xE0, 0x0F, 0x03, 0x01, 0xFF, 0xFF, 0x80, 0x60, 0xE0,
0x0E, 0x06, 0x01, 0xFF, 0xFF, 0x84, 0x30, 0x70, 0x1E, 0x0C, 0x00, 0xFF, 0xFF, 0x86, 0x18, 0x70,
0x1C, 0x08, 0x40, 0x7F, 0xFF, 0x83, 0x08, 0x38, 0x3C, 0x18, 0xC0, 0x3F, 0xFF, 0x81, 0x84, 0x38,
0x38, 0x11, 0x80, 0x3F, 0xFF, 0x80, 0xC6, 0x1C, 0x38, 0x31, 0x00, 0x1F, 0xFF, 0x80, 0x42, 0x1C,
0x70, 0x23, 0x00, 0x1C, 0x3F, 0x80, 0x63, 0x0E, 0x70, 0x62, 0x00, 0x00, 0x07, 0x80, 0x21, 0x0E,
0x70, 0x42, 0x00, 0x03, 0xC3, 0x80, 0x11, 0x0E, 0x60, 0x46, 0x00, 0x0F, 0xF1, 0x00, 0x11, 0x86,
0x60, 0xC4, 0x00, 0x1F, 0xF8, 0x00, 0x18, 0x86, 0xE0, 0x84, 0x00, 0x3F, 0xFC, 0x00, 0x08, 0x87,
0xE0, 0x84, 0x00, 0x7F, 0xFE, 0x00, 0x08, 0x87, 0xE0, 0x88, 0x00, 0x7E, 0x7E, 0x00, 0x00, 0x07,
0xE0, 0x88, 0x0C, 0x7C, 0x1F, 0x00, 0x00, 0x07, 0xE0, 0x88, 0x3C, 0xF8, 0x1F, 0x00, 0x00, 0x07,
0xE0, 0x00, 0xFC, 0xF8, 0x1F, 0x00, 0x00, 0x07, 0xE0, 0x01, 0xFC, 0x7C, 0x3F, 0x3F, 0xF0, 0x07,
0xE0, 0x03, 0xFC, 0x7E, 0x7E, 0x3F, 0xFE, 0x07, 0xE0, 0x07, 0xFE, 0x7F, 0xFE, 0x7F, 0xFF, 0x07,
0xE0, 0x07, 0xFE, 0x3F, 0xFC, 0x7F, 0xFF, 0x87, 0x60, 0x0F, 0xFF, 0x1F, 0xF8, 0xFF, 0xFF, 0x86,
0x60, 0x0F, 0xFF, 0x8F, 0xF1, 0xFF, 0xFF, 0x86, 0x70, 0x1F, 0xFF, 0xC3, 0xC3, 0xFF, 0xFF, 0x8E,
0x70, 0x1F, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0x8E, 0x30, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0x8E,
0x38, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0x9C, 0x38, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0x1C,
0x1C, 0x1F, 0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0x3C, 0x1C, 0x1F, 0xFF, 0xC0, 0x0F, 0xFF, 0xFE, 0x38,
0x1E, 0x1F, 0xFF, 0xC0, 0x03, 0xFF, 0xFC, 0x78, 0x0E, 0x0F, 0xFF, 0x80, 0x01, 0xFF, 0xF0, 0x70,
0x07, 0x0F, 0xFF, 0x80, 0x00, 0x3F, 0xC0, 0xE0, 0x07, 0x87, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xE0,
0x03, 0x87, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x01, 0xC3, 0xFE, 0x00, 0x03, 0x80, 0x03, 0x80,
0x00, 0xE0, 0xFC, 0x3F, 0xFE, 0x00, 0x07, 0x80, 0x00, 0xF0, 0x00, 0x07, 0xE0, 0x00, 0x0F, 0x00,
0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xE0, 0x7C, 0x00,
0x00, 0x0F, 0x00, 0x7C, 0x1F, 0xC0, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xFC, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x7F, 0x80, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00
};

const unsigned char f5 [] = {
0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x01, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x01, 0xF8, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x07, 0xFE, 0x00, 0xF8, 0x00,
0x00, 0x3E, 0x00, 0x0F, 0xFF, 0x00, 0x7C, 0x00, 0x00, 0x78, 0x00, 0x1F, 0xFF, 0x80, 0x1E, 0x00,
0x00, 0xF0, 0x00, 0x1F, 0xFF, 0xC0, 0x0F, 0x00, 0x01, 0xE0, 0x00, 0x1F, 0xFF, 0xC0, 0x07, 0x80,
0x01, 0xC0, 0x60, 0x1F, 0xFF, 0xE0, 0x03, 0x80, 0x03, 0x80, 0xC0, 0x1F, 0xFF, 0xF0, 0x01, 0xC0,
0x07, 0x81, 0x80, 0x1F, 0xFF, 0xF0, 0x01, 0xE0, 0x07, 0x03, 0x0C, 0x1F, 0xFF, 0xF0, 0x00, 0xF0,
0x0E, 0x06, 0x18, 0x0F, 0xFF, 0xF0, 0x10, 0x70, 0x0E, 0x04, 0x30, 0x0F, 0xFF, 0xF0, 0x18, 0x78,
0x1C, 0x08, 0x60, 0x0F, 0xFF, 0xF0, 0x08, 0x38, 0x1C, 0x18, 0xC0, 0x07, 0xFF, 0xF0, 0x0C, 0x38,
0x38, 0x10, 0x80, 0x07, 0xFF, 0xF0, 0xC6, 0x1C, 0x38, 0x21, 0x80, 0x03, 0xFF, 0xF0, 0x42, 0x1C,
0x70, 0x23, 0x00, 0x00, 0x1F, 0xF0, 0x63, 0x0E, 0x70, 0x62, 0x00, 0x00, 0x07, 0xF0, 0x21, 0x0E,
0x70, 0x42, 0x00, 0x03, 0xC3, 0xE0, 0x31, 0x0E, 0x60, 0x46, 0x00, 0x0F, 0xF1, 0xE0, 0x11, 0x8E,
0x60, 0x84, 0x00, 0x1F, 0xFC, 0xC0, 0x10, 0x87, 0xE0, 0x00, 0x02, 0x3F, 0xFC, 0x40, 0x18, 0x87,
0xE0, 0x00, 0x3E, 0x7F, 0xFE, 0x00, 0x08, 0x87, 0xE0, 0x00, 0xFC, 0x7E, 0x3E, 0x00, 0x08, 0x87,
0xE0, 0x03, 0xFC, 0x7C, 0x3F, 0x00, 0x08, 0xC7, 0xE0, 0x07, 0xFC, 0xF8, 0x1F, 0x00, 0x08, 0xC7,
0xE0, 0x0F, 0xFC, 0xF8, 0x1F, 0x00, 0x0C, 0xC7, 0xE0, 0x1F, 0xFC, 0xFC, 0x1E, 0x00, 0x04, 0xC7,
0xE0, 0x3F, 0xFE, 0x7E, 0x7E, 0x00, 0x00, 0x07, 0xE0, 0x3F, 0xFE, 0x7F, 0xFE, 0x00, 0x00, 0x07,
0xE0, 0x7F, 0xFE, 0x3F, 0xFC, 0x7C, 0x00, 0x07, 0x60, 0x7F, 0xFF, 0x1F, 0xF8, 0xFF, 0xC0, 0x06,
0x70, 0x7F, 0xFF, 0x8F, 0xF1, 0xFF, 0xF8, 0x06, 0x70, 0x7F, 0xFF, 0xC3, 0xC3, 0xFF, 0xFC, 0x0E,
0x70, 0x7F, 0xFF, 0x80, 0x07, 0xFF, 0xFE, 0x0E, 0x78, 0x7F, 0xFF, 0x80, 0x3F, 0xFF, 0xFE, 0x0E,
0x38, 0x7F, 0xFF, 0x01, 0xFF, 0xFF, 0xFE, 0x1C, 0x38, 0x7F, 0xFE, 0x00, 0xFF, 0xFF, 0xFE, 0x1C,
0x1C, 0x7F, 0xFE, 0x00, 0xFF, 0xFF, 0xFE, 0x38, 0x1C, 0x3F, 0xFC, 0x00, 0x7F, 0xFF, 0xFE, 0x38,
0x1E, 0x3F, 0xF8, 0x00, 0x7F, 0xFF, 0xFC, 0x70, 0x0E, 0x1F, 0xF0, 0x00, 0x3F, 0xFF, 0xFC, 0x70,
0x07, 0x0F, 0xF0, 0x00, 0x1F, 0xFF, 0xF8, 0xE0, 0x07, 0x87, 0xC0, 0x00, 0x07, 0xFF, 0xF1, 0xE0,
0x03, 0xC0, 0x03, 0x00, 0x03, 0xFF, 0xE1, 0xC0, 0x01, 0xC0, 0x03, 0xC0, 0x00, 0x7F, 0x03, 0x80,
0x01, 0xE0, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0x80, 0x00, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x0F, 0x00,
0x00, 0x7C, 0x1C, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x07, 0x80, 0x00, 0x00, 0x7C, 0x00,
0x00, 0x0F, 0x00, 0xF8, 0x0C, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x1F, 0xFC, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xE0, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00
};

const unsigned char f6 [] = {
0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x00, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x3F, 0x00, 0xF0, 0x00,
0x00, 0x3E, 0x00, 0x00, 0x7F, 0xE0, 0x7C, 0x00, 0x00, 0x78, 0x01, 0x00, 0xFF, 0xF0, 0x3E, 0x00,
0x00, 0xF0, 0x06, 0x01, 0xFF, 0xF8, 0x0F, 0x00, 0x01, 0xE0, 0x18, 0x01, 0xFF, 0xF8, 0x07, 0x80,
0x01, 0xC0, 0x30, 0x01, 0xFF, 0xFC, 0x03, 0x80, 0x03, 0x80, 0xC1, 0xC1, 0xFF, 0xFC, 0x01, 0xC0,
0x07, 0x81, 0x83, 0x81, 0xFF, 0xFE, 0x01, 0xE0, 0x07, 0x03, 0x06, 0x01, 0xFF, 0xFE, 0x00, 0xE0,
0x0E, 0x06, 0x18, 0x01, 0xFF, 0xFE, 0x00, 0x70, 0x0E, 0x04, 0x30, 0x00, 0xFF, 0xFE, 0x00, 0x78,
0x1C, 0x08, 0x60, 0x00, 0xFF, 0xFE, 0x00, 0x38, 0x1C, 0x18, 0x40, 0x00, 0xFF, 0xFE, 0x00, 0x38,
0x38, 0x10, 0x80, 0x00, 0xFF, 0xFE, 0x00, 0x1C, 0x38, 0x21, 0x00, 0x00, 0xFF, 0xFE, 0x02, 0x1C,
0x70, 0x03, 0x00, 0x00, 0x3F, 0xFE, 0x03, 0x0E, 0x70, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x03, 0x0E,
0x70, 0x00, 0x00, 0x01, 0xC3, 0xFC, 0x31, 0x0E, 0x60, 0x00, 0x1E, 0x0F, 0xF1, 0xFC, 0x31, 0x8E,
0x60, 0x01, 0xFF, 0x1F, 0xF8, 0xF8, 0x11, 0x87, 0xE0, 0x07, 0xFE, 0x3F, 0xFC, 0x70, 0x10, 0x87,
0xE0, 0x0F, 0xFE, 0x7F, 0xFE, 0x70, 0x18, 0x87, 0xE0, 0x3F, 0xFC, 0x7E, 0x7E, 0x20, 0x08, 0x87,
0xE0, 0x3F, 0xFC, 0x7C, 0x3F, 0x00, 0x08, 0x87, 0xE0, 0x7F, 0xFC, 0xF8, 0x1F, 0x00, 0x08, 0x87,
0xE0, 0xFF, 0xFC, 0xF8, 0x1F, 0x00, 0x08, 0x87, 0xE0, 0xFF, 0xFC, 0xFC, 0x3F, 0x00, 0x08, 0x87,
0xE1, 0xFF, 0xFE, 0x7E, 0x7E, 0x00, 0x08, 0x87, 0xE1, 0xFF, 0xFE, 0x7F, 0xFE, 0x00, 0x08, 0x87,
0xE1, 0xFF, 0xFE, 0x3F, 0xFC, 0x00, 0x08, 0x87, 0x61, 0xFF, 0xFF, 0x1F, 0xF8, 0x00, 0x08, 0x86,
0x71, 0xFF, 0xFF, 0x0F, 0xF1, 0xC0, 0x00, 0x8E, 0x71, 0xFF, 0xFE, 0x03, 0xC3, 0xF8, 0x01, 0x0E,
0x71, 0xFF, 0xFC, 0x00, 0x07, 0xFE, 0x00, 0x0E, 0x71, 0xFF, 0xF8, 0x04, 0x3F, 0xFF, 0x80, 0x0E,
0x38, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0xC0, 0x1C, 0x38, 0x7F, 0xE0, 0x07, 0xFF, 0xFF, 0xE0, 0x1C,
0x1C, 0x3F, 0x80, 0x07, 0xFF, 0xFF, 0xF0, 0x38, 0x1C, 0x1F, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x38,
0x1E, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x70, 0x0E, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x70,
0x07, 0x00, 0x30, 0x01, 0xFF, 0xFF, 0xF0, 0xE0, 0x07, 0x80, 0x1C, 0x00, 0xFF, 0xFF, 0xE1, 0xE0,
0x03, 0x81, 0x07, 0x00, 0x7F, 0xFF, 0xE1, 0xC0, 0x01, 0xC1, 0x81, 0xC0, 0x3F, 0xFF, 0xC3, 0x80,
0x01, 0xE0, 0xC0, 0x7E, 0x1F, 0xFF, 0x87, 0x00, 0x00, 0xF0, 0x30, 0x06, 0x07, 0xFF, 0x0F, 0x00,
0x00, 0x7C, 0x1C, 0x00, 0x00, 0xF8, 0x3E, 0x00, 0x00, 0x3E, 0x07, 0x00, 0x00, 0x00, 0x7C, 0x00,
0x00, 0x1F, 0x01, 0xF0, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x3F, 0x00, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00
};

const unsigned char f7 [] = {
0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x03, 0xFE, 0x00, 0x00,
0x00, 0x00, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
0x00, 0x3E, 0x00, 0x38, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x78, 0x01, 0xE0, 0x03, 0xF8, 0x3E, 0x00,
0x00, 0xF0, 0x07, 0x00, 0x07, 0xFC, 0x0F, 0x00, 0x01, 0xE0, 0x18, 0x00, 0x0F, 0xFF, 0x07, 0x00,
0x01, 0xC0, 0x30, 0x1C, 0x0F, 0xFF, 0x03, 0x80, 0x03, 0x80, 0xC0, 0xF0, 0x1F, 0xFF, 0x81, 0xC0,
0x07, 0x81, 0x81, 0x80, 0x1F, 0xFF, 0x81, 0xE0, 0x07, 0x03, 0x06, 0x00, 0x1F, 0xFF, 0xC0, 0xE0,
0x0E, 0x06, 0x0C, 0x00, 0x1F, 0xFF, 0xC0, 0x70, 0x1E, 0x04, 0x30, 0x00, 0x1F, 0xFF, 0xC0, 0x78,
0x1C, 0x00, 0x60, 0x00, 0x1F, 0xFF, 0xC0, 0x38, 0x1C, 0x00, 0x40, 0x00, 0x1F, 0xFF, 0xC0, 0x38,
0x38, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x1C, 0x38, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x1C,
0x70, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x0E, 0x70, 0x03, 0xFF, 0x00, 0x07, 0xFF, 0xC0, 0x0E,
0x70, 0x0F, 0xFF, 0xC1, 0xC3, 0xFF, 0x80, 0x0E, 0x60, 0x1F, 0xFF, 0x8F, 0xF1, 0xFF, 0x80, 0x06,
0xE0, 0x7F, 0xFF, 0x1F, 0xF8, 0xFF, 0x01, 0x86, 0xE0, 0xFF, 0xFE, 0x3F, 0xFC, 0x7F, 0x00, 0x87,
0xE0, 0xFF, 0xFE, 0x7F, 0xFE, 0x7E, 0x18, 0x87, 0xE1, 0xFF, 0xFC, 0x7E, 0x7E, 0x7C, 0x18, 0x87,
0xE1, 0xFF, 0xFC, 0xF8, 0x3F, 0x38, 0x08, 0x87, 0xE3, 0xFF, 0xFC, 0xF8, 0x1F, 0x30, 0x08, 0x87,
0xE3, 0xFF, 0xFC, 0xF8, 0x1F, 0x00, 0x08, 0x87, 0xE3, 0xFF, 0xFC, 0xFC, 0x1F, 0x00, 0x08, 0x87,
0xE3, 0xFF, 0xFC, 0x7E, 0x7E, 0x00, 0x08, 0x87, 0xE3, 0xFF, 0xFE, 0x7F, 0xFE, 0x00, 0x08, 0x87,
0xE3, 0xFF, 0xFE, 0x3F, 0xFC, 0x00, 0x18, 0x87, 0xE3, 0xFF, 0xF8, 0x1F, 0xF8, 0x00, 0x10, 0x87,
0x61, 0xFF, 0xE0, 0x0F, 0xF0, 0x00, 0x11, 0x8E, 0x70, 0xFF, 0xC0, 0x03, 0xC2, 0x00, 0x11, 0x0E,
0x70, 0xFF, 0x00, 0x00, 0x07, 0x00, 0x31, 0x0E, 0x70, 0x38, 0x00, 0x1C, 0x1F, 0xC0, 0x23, 0x0E,
0x38, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x22, 0x1C, 0x38, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x06, 0x1C,
0x1C, 0x03, 0x00, 0x1F, 0xFF, 0xFC, 0x04, 0x38, 0x1C, 0x01, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x38,
0x1E, 0x10, 0xC0, 0x1F, 0xFF, 0xFE, 0x00, 0x70, 0x0E, 0x18, 0x60, 0x0F, 0xFF, 0xFF, 0x00, 0x70,
0x07, 0x0C, 0x30, 0x0F, 0xFF, 0xFF, 0x00, 0xE0, 0x07, 0x86, 0x18, 0x0F, 0xFF, 0xFF, 0x81, 0xE0,
0x03, 0x83, 0x06, 0x07, 0xFF, 0xFF, 0x81, 0xC0, 0x01, 0xC1, 0x83, 0xC3, 0xFF, 0xFF, 0x03, 0x80,
0x01, 0xE0, 0xC0, 0x63, 0xFF, 0xFF, 0x07, 0x00, 0x00, 0xF0, 0x70, 0x01, 0xFF, 0xFE, 0x0F, 0x00,
0x00, 0x78, 0x1C, 0x00, 0x7F, 0xFC, 0x1E, 0x00, 0x00, 0x3E, 0x07, 0x00, 0x1F, 0xF0, 0x78, 0x00,
0x00, 0x1F, 0x01, 0xC0, 0x03, 0xC0, 0xF0, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00
};

const unsigned char f8 [] = {
0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00,
0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFC, 0x00, 0x00,
0x00, 0x00, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00,
0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
0x00, 0x3E, 0x00, 0x3F, 0xE0, 0x00, 0x7C, 0x00, 0x00, 0x78, 0x01, 0xE0, 0x00, 0x00, 0x1E, 0x00,
0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x1C, 0x00, 0x00, 0x3E, 0x07, 0x80,
0x01, 0xC0, 0x30, 0x0F, 0xC0, 0x7F, 0x83, 0x80, 0x03, 0x80, 0x40, 0x78, 0x00, 0xFF, 0xC1, 0xC0,
0x07, 0x80, 0x01, 0xC0, 0x01, 0xFF, 0xE1, 0xE0, 0x07, 0x00, 0x06, 0x00, 0x01, 0xFF, 0xF0, 0xE0,
0x0E, 0x00, 0x0C, 0x00, 0x01, 0xFF, 0xF0, 0x70, 0x0E, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x70,
0x1C, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x38, 0x1C, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x38,
0x38, 0x03, 0xFE, 0x00, 0x07, 0xFF, 0xF8, 0x1C, 0x38, 0x1F, 0xFF, 0x80, 0x07, 0xFF, 0xF8, 0x1C,
0x30, 0x3F, 0xFF, 0xE0, 0x07, 0xFF, 0xF8, 0x0E, 0x70, 0x7F, 0xFF, 0xE0, 0x07, 0xFF, 0xF8, 0x0E,
0x70, 0xFF, 0xFF, 0xC1, 0x83, 0xFF, 0xF8, 0x0E, 0x71, 0xFF, 0xFF, 0x8F, 0xF1, 0xFF, 0xF0, 0x06,
0xE1, 0xFF, 0xFF, 0x1F, 0xF8, 0xFF, 0xF0, 0x06, 0xE3, 0xFF, 0xFE, 0x3F, 0xFC, 0x7F, 0xE0, 0x07,
0xE3, 0xFF, 0xFE, 0x7F, 0xFE, 0x7F, 0xE0, 0x07, 0xE3, 0xFF, 0xFE, 0x7E, 0x7E, 0x3F, 0xC0, 0x07,
0xE3, 0xFF, 0xFC, 0x7C, 0x3E, 0x3F, 0x80, 0x07, 0xE3, 0xFF, 0xFC, 0xF8, 0x1F, 0x3F, 0x00, 0x07,
0xE3, 0xFF, 0xFC, 0xF8, 0x1F, 0x3C, 0x00, 0x87, 0xE3, 0xFF, 0xFC, 0xFC, 0x1E, 0x38, 0x08, 0x87,
0xE1, 0xFF, 0xF8, 0x7E, 0x3E, 0x00, 0x08, 0x87, 0xE1, 0xFF, 0xC0, 0x7F, 0xFE, 0x00, 0x18, 0x87,
0xE0, 0x7E, 0x00, 0x3F, 0xFC, 0x00, 0x10, 0x87, 0x60, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x11, 0x87,
0x60, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x11, 0x0E, 0x70, 0x00, 0x00, 0x43, 0xC0, 0x00, 0x31, 0x0E,
0x70, 0x08, 0x00, 0x60, 0x00, 0x00, 0x21, 0x0E, 0x70, 0x8C, 0x00, 0xFC, 0x1C, 0x00, 0x23, 0x0C,
0x38, 0xC4, 0x00, 0xFF, 0xFE, 0x00, 0x42, 0x1C, 0x38, 0x42, 0x00, 0xFF, 0xFE, 0x00, 0x46, 0x1C,
0x1C, 0x63, 0x00, 0xFF, 0xFF, 0x00, 0x84, 0x38, 0x1C, 0x21, 0x80, 0xFF, 0xFF, 0x81, 0x8C, 0x38,
0x1E, 0x30, 0xC0, 0xFF, 0xFF, 0xC1, 0x08, 0x70, 0x0E, 0x18, 0x60, 0xFF, 0xFF, 0xE0, 0x10, 0x70,
0x07, 0x08, 0x30, 0x7F, 0xFF, 0xE0, 0x30, 0xE0, 0x07, 0x84, 0x18, 0x7F, 0xFF, 0xF0, 0x01, 0xE0,
0x03, 0x82, 0x04, 0x7F, 0xFF, 0xF0, 0x01, 0xC0, 0x01, 0xC1, 0x80, 0x3F, 0xFF, 0xF0, 0x03, 0x80,
0x01, 0xE0, 0xC0, 0x1F, 0xFF, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x60, 0x1F, 0xFF, 0xF0, 0x0F, 0x00,
0x00, 0x78, 0x38, 0x0F, 0xFF, 0xF0, 0x1E, 0x00, 0x00, 0x3E, 0x00, 0x07, 0xFF, 0xE0, 0x7C, 0x00,
0x00, 0x1F, 0x00, 0x01, 0xFF, 0x80, 0xF8, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x7F, 0x03, 0xE0, 0x00,
0x00, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00,
0x00, 0x00, 0x7F, 0xC0, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00
};

