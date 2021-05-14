//------------------------------------------------------------
//-----------       TP660/TP660U XOR Keystream     -----------
//------                                                ------
//
// Author: KG5RKI
//------------------------------------------------------------
unsigned char TP660XOR[1024] = {
    0xD9, 0xA9, 0xC5, 0xBB, 0x29, 0x5F, 0xF0, 0x93, 0xD6, 0xF7, 0x89, 0xE2, 0xDD, 0x4A, 0x97, 0xE2,
    0x9C, 0x0F, 0x83, 0xA9, 0xE3, 0xA2, 0xCD, 0x08, 0x4F, 0x04, 0xFE, 0xB4, 0xD3, 0x22, 0xDE, 0xA3,
    0x98, 0x5A, 0xE6, 0xB9, 0x07, 0x3B, 0xF8, 0xA4, 0x24, 0x8C, 0x4E, 0x05, 0x1D, 0x90, 0xB1, 0xD0,
    0x22, 0x89, 0xEB, 0xF5, 0x78, 0x7B, 0x7E, 0x40, 0xC9, 0x32, 0x96, 0x7D, 0xBF, 0x86, 0x3D, 0xE1,
    0xD1, 0xDE, 0xCE, 0xA5, 0x5C, 0xF3, 0xAC, 0xF4, 0xF5, 0xD7, 0x33, 0x07, 0xFE, 0x35, 0xEF, 0x8F,
    0x77, 0xDA, 0x0C, 0x53, 0x17, 0x74, 0x0E, 0x1A, 0x9B, 0x9A, 0xC3, 0xCB, 0x5F, 0x0D, 0x75, 0xD3,
    0x2B, 0x3E, 0x63, 0xC7, 0x4F, 0x10, 0x73, 0x4A, 0xF2, 0xDE, 0x21, 0x32, 0xA7, 0xC0, 0xBB, 0xE6,
    0x41, 0x0A, 0xD0, 0x0A, 0xE9, 0x16, 0xE6, 0x5F, 0x6D, 0x44, 0x6B, 0xE4, 0xDB, 0x3E, 0xEE, 0x42,
    0x4F, 0x81, 0x8F, 0x66, 0x09, 0x19, 0xB4, 0x70, 0xC2, 0xAB, 0xFE, 0xCC, 0x40, 0xB9, 0x7C, 0x9E,
    0x29, 0x22, 0x1E, 0x64, 0x15, 0xE8, 0x6C, 0xD7, 0xE6, 0x36, 0x77, 0x11, 0x5C, 0xA2, 0x10, 0xF5,
    0xE4, 0xAF, 0x39, 0xCC, 0xB1, 0x96, 0xD9, 0x2C, 0x0E, 0x46, 0xB4, 0x1E, 0xF3, 0xA9, 0x99, 0x7F,
    0xD6, 0x29, 0xDD, 0xA7, 0xC3, 0x73, 0x09, 0x49, 0xAF, 0x7A, 0xD0, 0x9A, 0x0A, 0xBF, 0x44, 0xB6,
    0x93, 0xD1, 0x49, 0x3F, 0x70, 0x0F, 0x49, 0x47, 0x7E, 0xB5, 0x29, 0x70, 0xE6, 0x17, 0x7C, 0x51,
    0xF1, 0x27, 0xF7, 0x1C, 0x1D, 0x3D, 0x25, 0x7E, 0x70, 0x18, 0x5C, 0xC7, 0x0C, 0x20, 0xF0, 0x4B,
    0x04, 0xED, 0xA6, 0x08, 0x6E, 0x0D, 0x6C, 0x89, 0xB9, 0x02, 0x47, 0x0A, 0x41, 0x8B, 0x8C, 0xDC,
    0x21, 0x25, 0x53, 0x0B, 0x48, 0xD0, 0x29, 0x3F, 0xD0, 0x16, 0x05, 0xE0, 0x8B, 0x4A, 0x7E, 0x7D,
    0xDE, 0x0E, 0x3A, 0x6F, 0xD2, 0x17, 0xAA, 0xB9, 0x68, 0x35, 0xF4, 0x33, 0x2D, 0x8D, 0x31, 0xE8,
    0x0F, 0x29, 0xD9, 0xBC, 0x6F, 0xB4, 0x7B, 0x52, 0x77, 0x7E, 0xB2, 0x2C, 0xAE, 0xC7, 0x54, 0x14,
    0xC9, 0x39, 0xEC, 0xBB, 0xC5, 0xB6, 0x6B, 0xA1, 0x32, 0x54, 0x1A, 0x34, 0xD2, 0xA6, 0xD3, 0x3C,
    0x62, 0x3E, 0x71, 0x76, 0xB8, 0x6F, 0x85, 0x7F, 0x0E, 0x58, 0x4B, 0xF4, 0x9E, 0x1D, 0xDC, 0xD8,
    0x6F, 0x78, 0xA4, 0x36, 0x6E, 0x71, 0x17, 0x07, 0xC0, 0x69, 0xA0, 0x55, 0x57, 0x5D, 0xDA, 0xA1,
    0xC3, 0x69, 0x03, 0x83, 0x4B, 0x8B, 0xAE, 0x90, 0x3D, 0xAA, 0xB7, 0x80, 0x82, 0xD7, 0x7C, 0x91,
    0x75, 0xD2, 0x4A, 0x26, 0xF6, 0xD0, 0x16, 0xB4, 0xB9, 0x7B, 0x6E, 0xDE, 0xE4, 0x3B, 0xAF, 0xDF,
    0xDA, 0xB4, 0x77, 0x29, 0x51, 0x90, 0x5D, 0x4B, 0xAB, 0x7E, 0xE0, 0x18, 0x83, 0x7A, 0x9E, 0x06,
    0x86, 0x50, 0xC7, 0xD4, 0x84, 0x5B, 0xD0, 0x70, 0xC6, 0x93, 0x6C, 0x17, 0xA3, 0xC7, 0xB8, 0xBE,
    0x4E, 0x26, 0xB5, 0xB1, 0xF2, 0x04, 0xFC, 0x7A, 0x01, 0xDB, 0xAD, 0x04, 0xC9, 0x90, 0xA9, 0x00,
    0x48, 0xF8, 0x01, 0x88, 0x41, 0x9B, 0xAE, 0x02, 0x8F, 0xB8, 0x82, 0x48, 0xBA, 0x89, 0x5E, 0x06,
    0xC8, 0xC7, 0xA6, 0x63, 0x55, 0x71, 0xF2, 0xE3, 0xE6, 0xCA, 0x06, 0x8B, 0x7B, 0xA1, 0x05, 0x47,
    0x63, 0xD4, 0xE1, 0x8A, 0x54, 0x17, 0x16, 0x34, 0xBB, 0xF2, 0x98, 0xB8, 0x51, 0x09, 0x09, 0x7E,
    0xEF, 0xA0, 0x30, 0x86, 0xA3, 0x5E, 0xA7, 0x4F, 0x03, 0x51, 0xD3, 0xF7, 0xC1, 0x33, 0x19, 0xA3,
    0x80, 0xEC, 0x4F, 0x21, 0xE6, 0x57, 0x71, 0xCC, 0xF3, 0x49, 0x96, 0xB0, 0x91, 0xD0, 0x22, 0xEF,
    0x6C, 0xB8, 0x3C, 0x64, 0x03, 0x54, 0x83, 0x85, 0x00, 0x7B, 0xFC, 0x8E, 0xC4, 0xD0, 0x4F, 0xDC,
    0x47, 0x46, 0x34, 0x96, 0x1F, 0xE4, 0x28, 0x93, 0xDE, 0xC6, 0x64, 0x78, 0xA1, 0x65, 0x0F, 0x21,
    0xE6, 0x18, 0xB3, 0x43, 0x9E, 0xDA, 0xEE, 0x4F, 0x84, 0x4D, 0x6A, 0x99, 0xAC, 0xFF, 0x0E, 0xB9,
    0x5F, 0xEC, 0x76, 0x31, 0x26, 0x45, 0xA1, 0x51, 0x25, 0x70, 0xEA, 0x58, 0xAA, 0x50, 0x3A, 0xDC,
    0x06, 0xC6, 0x7B, 0x6C, 0x9C, 0x78, 0x50, 0x73, 0x37, 0xD1, 0x03, 0x5F, 0xA1, 0x49, 0xBF, 0x03,
    0x71, 0xE6, 0xFF, 0x3A, 0x24, 0x02, 0x46, 0xCE, 0x6F, 0x50, 0x11, 0x98, 0xD4, 0x1A, 0x09, 0xE8,
    0x74, 0xCC, 0x7E, 0x27, 0x24, 0xB6, 0x11, 0xBA, 0xC2, 0x0E, 0xB0, 0x2A, 0xCA, 0x34, 0xC8, 0x82,
    0x24, 0x3A, 0xB5, 0xF9, 0x40, 0xA4, 0x7E, 0xD1, 0x65, 0x6C, 0xBF, 0x7F, 0x46, 0x4A, 0xE6, 0x0C,
    0xD7, 0x32, 0xA2, 0xBB, 0x5E, 0x1D, 0x99, 0xEC, 0xCD, 0x0C, 0x5A, 0x40, 0x4F, 0x4A, 0x92, 0xFE,
    0x21, 0xF2, 0x82, 0xB6, 0xA3, 0xB2, 0xB0, 0x24, 0xAF, 0xCE, 0xDD, 0x56, 0x29, 0x68, 0x38, 0x11,
    0xD7, 0xFE, 0xD1, 0x72, 0x73, 0x34, 0x50, 0xD1, 0xFF, 0xD4, 0xE7, 0xEA, 0x59, 0x13, 0x85, 0x3F,
    0x0F, 0x16, 0x4D, 0xB8, 0x74, 0xB4, 0x46, 0x8D, 0xF4, 0x7E, 0x54, 0x65, 0xA4, 0xFC, 0x67, 0xC0,
    0x1D, 0x3A, 0xF2, 0x92, 0x8B, 0x83, 0x9F, 0x30, 0x01, 0x6D, 0x41, 0x70, 0x10, 0x16, 0x09, 0x0C,
    0x97, 0xAC, 0xFE, 0x48, 0xDC, 0x33, 0xA7, 0xD5, 0xDC, 0x82, 0x0A, 0xF4, 0xE0, 0x8F, 0xDB, 0xDF,
    0x51, 0xED, 0xED, 0x64, 0xCD, 0x93, 0xEC, 0xD3, 0x7A, 0xDF, 0x4E, 0x1A, 0x9B, 0xDB, 0x87, 0x2F,
    0x61, 0xBE, 0x7C, 0xAE, 0x03, 0xB6, 0x3B, 0xC4, 0x11, 0xE4, 0xE9, 0x4B, 0x05, 0xA8, 0xFB, 0x36,
    0x1B, 0x20, 0xAA, 0x30, 0x62, 0xEB, 0xA0, 0x80, 0x13, 0x33, 0xF8, 0x30, 0x22, 0xEA, 0x65, 0x6E,
    0x14, 0x53, 0xB1, 0x32, 0x10, 0xC5, 0x6A, 0x21, 0x38, 0xAC, 0xD8, 0xB2, 0x3A, 0xD0, 0x31, 0x8F,
    0x21, 0xDA, 0x10, 0x3E, 0x72, 0x14, 0x24, 0x00, 0x74, 0x70, 0x25, 0xF9, 0xCF, 0xCC, 0x0D, 0x92,
    0x58, 0x74, 0x84, 0x1C, 0x2C, 0xE8, 0x9C, 0xB6, 0xFC, 0xE0, 0xBE, 0x70, 0xA7, 0x8E, 0xE5, 0xB0,
    0x0E, 0x23, 0x09, 0xD5, 0x24, 0x94, 0xDF, 0x1B, 0x44, 0x9E, 0xBF, 0xBE, 0xC8, 0x08, 0xE5, 0x63,
    0xD7, 0x28, 0xDD, 0xB3, 0x7E, 0xA8, 0x39, 0x49, 0x02, 0x8A, 0x85, 0xCE, 0x75, 0x6A, 0x7D, 0x62,
    0x88, 0x03, 0x7D, 0x3E, 0xA0, 0xF5, 0x38, 0x98, 0x2C, 0xC6, 0xAD, 0xC7, 0x35, 0x26, 0x57, 0xA8,
    0x36, 0x77, 0xA4, 0x40, 0x2F, 0x8C, 0xA9, 0xA3, 0xF5, 0xB1, 0x14, 0x14, 0xCC, 0xEC, 0x62, 0x6D,
    0x37, 0x83, 0x52, 0xC2, 0x0F, 0xBE, 0x99, 0x41, 0xD3, 0xEE, 0xD7, 0x5C, 0x3F, 0xAE, 0xCA, 0x2B,
    0x20, 0x69, 0xC1, 0x0B, 0x66, 0x1D, 0x54, 0x8C, 0x7B, 0x5E, 0x53, 0x8A, 0xD3, 0x9D, 0xFC, 0x99,
    0xC5, 0xAA, 0x71, 0xA7, 0x99, 0x78, 0x69, 0xDC, 0xE2, 0x21, 0x25, 0xC5, 0x0E, 0x29, 0xA6, 0xB2,
    0x3B, 0x07, 0x1D, 0x5C, 0x4C, 0xE1, 0xA3, 0xCB, 0x3C, 0x98, 0x2A, 0x77, 0xB3, 0x04, 0xB3, 0xAE,
    0xD7, 0x81, 0xC2, 0x35, 0x65, 0xAA, 0x0F, 0x32, 0x00, 0x64, 0x7F, 0x49, 0xC9, 0x1F, 0x52, 0x06,
    0x2F, 0x58, 0x9E, 0x7B, 0x09, 0x62, 0xFC, 0x2A, 0xE2, 0x67, 0x81, 0x25, 0x93, 0xAA, 0xF0, 0x73,
    0x18, 0x0E, 0x2D, 0xB6, 0x9C, 0xDC, 0xF5, 0x0B, 0xD6, 0xC1, 0xCD, 0x32, 0x98, 0x16, 0x38, 0xEF,
    0xA5, 0x64, 0x2D, 0xAF, 0xC4, 0x28, 0xC8, 0x6F, 0x12, 0xD3, 0x40, 0xDA, 0x9C, 0x15, 0x19, 0xB1,
    0x2D, 0x5B, 0x9B, 0x70, 0x65, 0x97, 0x82, 0x2F, 0x0B, 0x3F, 0xF7, 0xC6, 0xA4, 0x98, 0xBF, 0x34 
};
