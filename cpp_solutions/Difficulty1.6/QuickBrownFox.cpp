// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/quickbrownfox
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t n;
    cin >> n;
    string results[n];
    cin.ignore();
    string abc = "abcdefghijklmnopqrstuvwxyz", ABC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (size_t i = 0; i < n; i++)
    {
        bool pangram = true;
        string input;
        getline(cin, input);
        for (size_t j = 0; j < 26; j++)
        {
            if (input.find(abc[j]) == string::npos && input.find(ABC[j]) == string::npos) {
                if (pangram) {
                    pangram = false;
                    results[i]+="missing ";
                }
                results[i]+=abc[j];
            }
        }
        if (results[i].length() == 0) results[i]+="pangram";
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << results[i] << endl;
    }
    return 0;
}
