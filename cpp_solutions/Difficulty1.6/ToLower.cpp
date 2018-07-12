// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/tolower
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t p, t, solved = 0;
    cin >> p >> t;
    for (size_t i = 0; i < p; i++)
    {
        bool passed = true;
        for (size_t j = 0; j < t; j++)
        {
            string word;
            cin >> word;
            for (size_t k = 1; k < word.length() && passed; k++)
            {
                int ascii = int(word[k]);
                if (ascii >= 65 && ascii <= 90) {
                    passed = false;
                }
            }
        }
        if (passed) {
            solved+=1;
        }
    }
    cout << solved << endl;
    return 0;
}
