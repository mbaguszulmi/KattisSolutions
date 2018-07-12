// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/raggedright
// http://www.mbaguszulmi.com

#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t maxLen = 0, maxidx = 0, ragged = 0;
    string text = "";
    while (1) {
        string nice;
        getline(cin, nice);
        if (maxLen < nice.length()) maxLen = nice.length();
        if (nice != "") {
            text+=nice+"\n";
        }
        else break;
        maxidx++;
    }
    stringstream ssin(text);
    for (size_t i = 0; ssin.good() && i < maxidx-1; i++) {
        string nice;
        getline(ssin, nice);
        if (nice.length() != maxLen) {
            ragged+=(pow(maxLen - nice.length(), 2));
        }
    }
    cout << ragged << endl;
    return 0;
}
