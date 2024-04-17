#include "StringUtils.h"

namespace phonedirectory
{

        // returns true if ch is alphabetical
    int isAlpha(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

    // copies src to des
    void strCpy(char* des, const char* src) {
        int i;
        for (i = 0; src[i]; i++) des[i] = src[i];
        des[i] = 0;
    }

    // returns the length of str
    int strLen(const char* str) {
        int len;
        for (len = 0; str[len]; len++);
        return len;
    }

    // removes the non-alphabetic characters from the begining and end of a word
    void trim(char word[])
    {
        int i;
        while (word[0] && !isAlpha(word[0]))
        {
            strCpy(word, word + 1);
        }
        i = strLen(word);
        while (i && !isAlpha(word[i - 1]))
        {
            word[i-- - 1] = 0;
        }
    }
}