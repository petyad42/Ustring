#ifndef USTRING_H
#define USTRING_H

#include "string5.h"

class UString:public String{
    static bool isucase;
public:
    UString(char ch): String(ch){}

    UString(const char *p = ""):String(p){}

    UString(const String& s1):String(s1){}

    static void UCase (bool);

    bool UCase() const;
};

std::ostream& operator <<(std::ostream& os, const UString& s0);

#endif // USTRING_H
