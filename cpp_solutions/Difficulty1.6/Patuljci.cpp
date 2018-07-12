// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/patuljci
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

bool check100(size_t dwarves[]) {
    size_t total = 0;
    for (size_t i = 0; i < 7; i++)
    {
        total+=dwarves[i];
    }
    if (total == 100) return true;
    else return false;
}

int main(int argc, char const *argv[])
{
    size_t hats[9], dwarves[7];
    bool done = false;
    for (size_t i = 0; i < 9; i++)
    {
        cin >> hats[i];
    }
    
    for (size_t i = 0; i < 9 && !done; i++)
    {
        for (size_t j = 0; j < 9 && j!= i && !done; j++)
        {
            size_t idx = 0, k = 0;
            while (idx < 7) {
                if (k!=i && k!=j) {
                    dwarves[idx] = hats[k];
                    idx++;
                }
                k++;
            }
            done = check100(dwarves);
        }
    }

    for (size_t i = 0; i < 7; i++)
    {
        cout << dwarves[i] << endl;
    }
    return 0;
}
