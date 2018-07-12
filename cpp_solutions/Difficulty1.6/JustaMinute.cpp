// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/justaminute
// http://www.mbaguszulmi.com

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t n, m = 0, s = 0;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        m+=a;
        s+=b;
    }
    m*=60;
    double result = (double)s/(double)(m);
    if (result - 1.0 > 0.0000000) {
        cout << fixed << setprecision(9) << result << endl;
    }
    else {
        cout << "measurement error" << endl;
    }
    return 0;
}
