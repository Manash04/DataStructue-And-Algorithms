
#include <iostream>
#include <string>
using namespace std;

int main() {
    string mainStr, patternStr, replaceStr;

    cout << "Enter the main string: ";
    getline(cin, mainStr);

    cout << "Enter the pattern string: ";
    getline(cin, patternStr);

    cout << "Enter the replace string: ";
    getline(cin, replaceStr);

    size_t pos = mainStr.find(patternStr);

    if (pos != string::npos) {
        while (pos != string::npos) {
            mainStr.replace(pos, patternStr.length(), replaceStr);
            pos = mainStr.find(patternStr, pos + replaceStr.length());
        }
        cout << "Pattern found and replaced successfully:" << endl;
        cout << mainStr << endl;
    } else {
        cout << "Pattern not found in the main string." << endl;
    }

    return 0;
}
