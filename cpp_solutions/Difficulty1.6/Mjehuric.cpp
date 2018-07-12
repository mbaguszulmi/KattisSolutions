// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/mjehuric
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int seq[5];
    cin >> seq[0] >> seq[1] >> seq[2] >> seq[3] >> seq[4];
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 1; j < 5; j++)
        {
            if (seq[j-1] > seq[j]) {
                int temp = seq[j-1];
                seq[j-1] = seq[j];
                seq[j] = temp;
                for (size_t k = 0; k < 5; k++)
                {
                    cout << seq[k] << ' ';
                }
                cout << endl;
            }
        }
    }
    return 0;
}
