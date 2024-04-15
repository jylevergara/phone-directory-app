#include <cstdio>
#ifndef WORD_ANALYZER_H
#define WORD_ANALYZER_H

namespace phonedirectory
{
    const int MAX_WORD_LEN = 21;
    struct Word
    {
        char letters[MAX_WORD_LEN];
        int count;
    };

    int readWord(char *word, FILE *fptr, int maxLen);
    int searchWords(const Word words[], int num, const char word[]);
    int totalCount(const Word* words, int num);

    void programTitle();
    void wordStats(const char *filename);
    void addWord(Word words[], int* index, const char newWord[]);
    void listWords(const Word words[], int noOfWords, const char* theTitle);
    void sort(Word words[], int cnt, int sortType);
    void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
    void endList();

}

#endif