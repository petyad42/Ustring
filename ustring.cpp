#include "ustring.h"

#include <iostream>
#include <cstring>

UString::UString(char ch):String(ch) {
    len = 1;
    pData = new char[len+1];
    pData[0] = ch;
    pData[1] = '\0';
}


UString::String(const char *p) {
    len = strlen(p);
    pData = new char[len+1];
    strcpy(pData, p);
}

UString::String(const String& s1) {
    len = s1.len;
    pData = new char[len+1];
    strcpy(pData, s1.pData);
}
