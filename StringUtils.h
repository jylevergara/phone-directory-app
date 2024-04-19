#ifndef STRING_UTILS_H
#define STRING_UTILS_H

namespace phonedirectory {
    void trim(char word[]);
    int isAlpha(char ch);
    void strCpy(char* des, const char* src);
     int strLen(const char* str);
     char toLower(char ch);

}

#endif