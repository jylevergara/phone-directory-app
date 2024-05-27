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

    int searchWords(const Word words[], int num, const char word[]);
    void addWord(Word words[], int *index, const char newWord[]);
    int readWord(char *word, FILE *fptr, int maxLen);
    void title(const char* value, int len);
    void endList();
    void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
    int findMaxLen(const Word words[], int noOfWords);
    void listWords(const Word words[], int noOfWords, const char *theTitle);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt, int sortType);
    int totalCount(const Word *words, int num);
    void wordStats(const char *filename);
    void programTitle();
}

#endif