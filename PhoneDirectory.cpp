#include <iostream>
#include "WordAnalyzer.h"
#include "StringUtils.h"

using namespace std;

namespace phonedirectory {
const int MAX_NAME_LEN = 51;

    void phoneDir(const char *programTitle, const char *fileName) {
        FILE *fptr;
        char input[MAX_NAME_LEN], inputLowercase[MAX_NAME_LEN];
        char name[MAX_NAME_LEN], number[5], area[4], prefix[4];
        char nameLowercase[MAX_NAME_LEN];
        int repeat = 1, isMatch;
        cout << programTitle << " phone direcotry search" << endl;
        cout << "-------------------------------------------------------" << endl;

        while (repeat) {
            fptr = fopen(fileName, "r");
            if (!fptr) {
                cout << fileName << " file not found!" << endl;
                break;
            }

            cout << "Enter a partial name to search (no spaces) or enter '!' to exit" << endl;
            cout << "> ";
            cin >> input;
            repeat = strCmp(input, "!") != 0;

            // Loop until fscanf reaches the end of the file
            while (!feof(fptr)) {
                // Read line from input file
                fscanf(fptr, "%[^\t]\t%s\t%s\t%s\n", name, area, prefix, number);
                // Convert name to lower case
                toLowerCaseAndCopy(nameLowercase, name);
                // convert search input to lower case
                toLowerCaseAndCopy(inputLowercase, input);

                // compare name to input
                isMatch = strContains(nameLowercase, inputLowercase);

                // > if match, print the record
                if (isMatch == 0) {
                    cout << name << ": (" << area << ") " << prefix << "-" << number << endl;
                }
            }
            fclose(fptr);
        }

        cout << "Thank you for using " << programTitle << " directory." << endl;
    }

}