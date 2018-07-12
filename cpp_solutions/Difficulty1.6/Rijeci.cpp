// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/rijeci
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t k, count[2], countBefore[2] = {1, 0}, a = 1, b = 0;
    cin >> k;
    for (size_t i = 0; i < k; i++)
    {
        size_t tmpA, tmpB;
        tmpA = countBefore[0];
        tmpB = countBefore[1];
        countBefore[0] = a;
        countBefore[1] = b;
        if (i == 0) {
            a = 0;
            b = 1;
        }
        else {
            a = tmpA+count[0];
            b = tmpB+count[1];
        }
        count[0] = a;
        count[1] = b;
    }
    cout << a << ' ' << b << endl;
    return 0;
}
