#ifndef STRING_UTILS_H
#define STRING_UTILS_H

namespace phonedirectory
{
    void trim(char word[]);
    int isAlpha(char ch);
    void strCpy(char *des, const char *src);
    int strLen(const char *str);
    char toLower(char ch);
    int strCmp(const char *s1, const char *s2);
    void toLowerCaseAndCopy(char des[], const char source[]);
    int strContains(const char *str, const char *search);
    int strCmp(const char *s1, const char *s2);
    int strnCmp(const char *s1, const char *s2, int len);
}

#endif