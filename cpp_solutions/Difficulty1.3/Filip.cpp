#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    if (stoi(a) > stoi(b)) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
    return 0;
}
