#include "StringUtils.h"

namespace phonedirectory
{
    // returns the lower case value of a character
    char toLower(char ch)
    {
        if (ch >= 'A' && ch <= 'Z')
            ch += ('a' - 'A');
        return ch;
    }

    // compares s1 and s2 cStrings and returns:
    // > 0 if s1 > s2
    // < 0 if s1 < s3
    // == 0 if s1 == s2
    int strCmp(const char *s1, const char *s2)
    {
        int i;
        for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
            ;
        return s1[i] - s2[i];
    }

    // returns true if ch is alphabetical
    int isAlpha(char ch)
    {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }

    // checks if one string is contained within another string
    int strContains(const char *str, const char *search)
    {
        int i, result = 1;
        int strLength = strLen(str);
        int searchLength = strLen(search);
        char *strPiece = nullptr;
        strPiece = new char[strLength + 1];

        for (i = 0; i <= (strLength - searchLength); i++)
        {
            strCpy(strPiece, &str[i]);
            trim(strPiece);
            if (strnCmp(strPiece, search, searchLength) == 0)
            {
                result = 0;
                break;
            }
        }
        delete[] strPiece;
        strPiece = nullptr;
        return result;
    }
    // compares s1 and s2 cStrings and returns:
    // > 0 if s1 > s2
    // < 0 if s1 < s3
    // == 0 if s1 == s2
    int strCmp(const char *s1, const char *s2)
    {
        int i;
        for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
            ;
        return s1[i] - s2[i];
    }
    // compares s1 and s2 cStrings upto len characters and returns:
    // > 0 if s1 > s2
    // < 0 if s1 < s3
    // == 0 if s1 == s2
    int strnCmp(const char *s1, const char *s2, int len)
    {
        int i = 0;
        while (i < len - 1 && s1[i] && s2[i] && s1[i] == s2[i])
        {
            i++;
        }
        return s1[i] - s2[i];
    }

    // copies src to des
    void strCpy(char *des, const char *src)
    {
        int i;
        for (i = 0; src[i]; i++)
            des[i] = src[i];
        des[i] = 0;
    }

    // copies the  lower case version of the source into des
    void toLowerCaseAndCopy(char des[], const char source[])
    {
        int i = 0, j = 0;
        for (; source[i] != 0; i++)
        {
            des[j++] = toLower(source[i]);
        }
        des[j] = 0;
    }

    // returns the length of str
    int strLen(const char *str)
    {
        int len;
        for (len = 0; str[len]; len++)
            ;
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