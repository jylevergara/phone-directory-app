#include <cstdio>
#include <iostream>
#include <iomanip>
#include "WordAnalyzer.h"

using namespace std;

namespace sdds
{
    void programTitle()
    {
        cout << "This program reads a text file and analyzes and reports the number" << endl
             << "of words and their occurrences in the text file." << endl;
    }

    void wordStats(const char *filename)
    {
        FILE *fptr = fopen(filename, "r");
        Word words[MAX_NO_OF_WORDS] = {{"", 0}};
        char word[MAX_WORD_LEN];
        char lowerCaseWord[MAX_WORD_LEN];
        int NoOfWords = 0;
        int maxLen = 0;
        int foundIndex = 0;
        int wordCount = 0;
        if (fptr)
        {
            while (readWord(word, fptr, MAX_WORD_LEN))
            {
                trim(word);
                toLowerCaseAndCopy(lowerCaseWord, word);
                if (lowerCaseWord[0] != 0)
                {
                    wordCount++;
                    if (maxLen < strLen(lowerCaseWord))
                    {
                        maxLen = strLen(lowerCaseWord);
                    }
                    if (NoOfWords == 0)
                    {
                        addWord(words, &NoOfWords, lowerCaseWord);
                    }
                    else
                    {
                        foundIndex = searchWords(words, NoOfWords, lowerCaseWord);
                        if (foundIndex < 0)
                        { // word not found in list; so word is new and never read before
                            foundIndex = NoOfWords;
                            addWord(words, &NoOfWords, lowerCaseWord);
                        }
                        else
                        {
                            words[foundIndex].count++;
                        }
                    }
                }
            }
            cout << "---------------------------------------------------" << endl
                 << "Read " << wordCount << " words!" << endl
                 << "---------------------------------------------------" << endl;
            sort(words, NoOfWords, 1);
            listWords(words, NoOfWords, "List of words Sorted by occurance");
            sort(words, NoOfWords, 0);
            listWords(words, NoOfWords, "List of words Sorted alphabetically");
            totalWordsStat(NoOfWords, totalCount(words, NoOfWords), maxLen);
            fclose(fptr);
        }
        else
        {
            cout << "File \"" << filename << "\" not found!" << endl;
        }
    }

}