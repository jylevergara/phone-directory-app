#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
#include "StringUtils.h"
#include "WordAnalyzer.h"
using namespace phonedirectory;

int main() {
    char filename[256];
    programTitle();
    cout << "Enter filename: ";
    cin >> filename;
    wordStats(filename);
    return 0;
 }