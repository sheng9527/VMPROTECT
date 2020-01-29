#include "../include/main.hpp"
#include <string.h>

int loadProtectedCode(BYTE **mc)
{
    BYTE c[] = {
        0x02, 0x10, 0x06, 0x03, 0x03, 0x00, 0x06, 0x02, 0x00, 0x00, 0x06, 
        0x04, 0x00, 0x00, 0x06, 0x05, 0x00, 0x00, 0x21, 0x03, 0x02, 0x00, 
        0x09, 0x02, 0x01, 0x22, 0x04, 0x02, 0x21, 0x04, 0x05, 0x00, 0x21, 
        0x01, 0x01, 0x00, 0x09, 0x02, 0x01, 0x31, 0x02, 0x05, 0x12, 0x80, 
        0x00, 0x22, 0x04, 0x02, 0x21, 0x04, 0x0A, 0x00, 0x21, 0x01, 0x01, 
        0x00, 0x09, 0x02, 0x01, 0x31, 0x02, 0x05, 0x12, 0x80, 0x00, 0x22, 
        0x04, 0x02, 0x24, 0x04, 0x06, 0x00, 0x21, 0x01, 0x01, 0x00, 0x09, 
        0x02, 0x01, 0x31, 0x02, 0x05, 0x12, 0x80, 0x00, 0x22, 0x04, 0x02, 
        0x24, 0x04, 0x0C, 0x00, 0x21, 0x01, 0x01, 0x00, 0x09, 0x02, 0x01, 
        0x31, 0x02, 0x05, 0x12, 0x80, 0x00, 0x22, 0x04, 0x02, 0x21, 0x04, 
        0x0F, 0x00, 0x21, 0x01, 0x01, 0x00, 0x09, 0x02, 0x01, 0x31, 0x02, 
        0x05, 0x12, 0x80, 0x00, 0x13, 0x16, 0x00, 0x21, 0x03, 0x05, 0x00, 
        0x06, 0x05, 0x80, 0x09, 0x27, 0x04, 0x05, 0x31, 0x04, 0x03, 0x12, 
        0x94, 0x00, 0x13, 0x97, 0x00, 0x11, 0x9A, 0x00, 0x11, 0xA1, 0x00, 
        0x06, 0x01, 0xD7, 0x00, 0x11, 0xA8, 0x00, 0x06, 0x01, 0xDB, 0x00, 
        0x11, 0xA8, 0x00, 0x02, 0x21, 0x21, 0x02, 0x01, 0x00, 0x06, 0x03, 
        0x00, 0x00, 0x06, 0x04, 0x00, 0x00, 0x09, 0x03, 0x01, 0x61, 0x03, 
        0x51, 0x21, 0x01, 0x01, 0x00, 0x21, 0x02, 0x01, 0x00, 0x09, 0x03, 
        0x02, 0x31, 0x03, 0x04, 0x12, 0xD0, 0x00, 0x13, 0xB6, 0x00, 0x09, 
        0x03, 0x01, 0x61, 0x03, 0x52, 0xEC, 0x50, 0x41, 0x53, 0x53, 0x00, 
        0x46, 0x41, 0x49, 0x4c, 0x45, 0x44, 0x00
    };
    *mc = new BYTE[sizeof(c)/sizeof(c[0])];

    memcpy(*mc, c, sizeof(c)/sizeof(c[0]));
    return sizeof(c)/sizeof(c[0]);
}