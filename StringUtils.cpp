#include "StringUtils.h"

namespace phonedirectory {



    // removes the non-alphabetic characters from the begining and end of a word
    void trim(char word[]) {
        int i;
        while (word[0] && !isAlpha(word[0])) {
            strCpy(word, word + 1);
        }
        i = strLen(word);
        while (i && !isAlpha(word[i - 1])) {
            word[i-- - 1] = 0;
        }
    }
}