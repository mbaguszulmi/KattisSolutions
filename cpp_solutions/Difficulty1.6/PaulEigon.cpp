// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/pauleigon
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, p, q;
    cin >> n >> p >> q;
    if (((p+q)/n) %2 == 0) {
        cout << "paul" << endl;
    }
    else {
        cout << "opponent" << endl;
    }
    return 0;
}
