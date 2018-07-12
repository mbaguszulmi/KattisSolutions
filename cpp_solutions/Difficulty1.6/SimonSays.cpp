// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/simonsays
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t n;
    cin >> n;
    cin.ignore();
    string simonSays = "";
    string prefix = "Simon says";
    for (size_t i = 0; i < n; i++)
    {
        string command;
        getline(cin, command);
        bool simon = true;
        for (size_t i = 0; i < 10 && simon; i++)
        {
            if (command[i] != prefix[i]) {
                simon = false;
            }
        }
        if (simon) {
            size_t commandLen = command.length();
            for (size_t i = 10; i < commandLen; i++)
            {
                simonSays+=command[i];
            }
            simonSays+='\n';
        }
    }
    cout << simonSays;
    return 0;
}
