// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/skocimis
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    a=b-a-1;
    c-=b+1;
    if (a >= c) {
        cout << a << endl;
    }
    else {
        cout << c << endl;
    }
    return 0;
}
