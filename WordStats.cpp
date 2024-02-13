#include <iostream>
#include "WordAnalyzer.h"
using namespace sdds;
using namespace std;


int main() {
    char filename[256];
    programTitle();
    cout << "Enter filename: ";
    cin >> filename;
    wordStats(filename);
    return 0;
}