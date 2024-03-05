#include <cstdio>
#ifndef WORD_ANALYZER_H
#define WORD_ANALYZER_H

namespace sdds
{
    const int MAX_WORD_LEN = 21;
    struct Word
    {
        char letters[MAX_WORD_LEN];
        int count;
    };

    int readWord(char *word, FILE *fptr, int maxLen);

    void programTitle();
    void wordStats(const char *filename);

}

#endif