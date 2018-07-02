#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m, _min, _max;
    cin >> n >> m;
    
    if (n < m) {
        _min = n+1;
        _max = m+1;
    }
    else {
        _min = m+1;
        _max = n+1;
    }

    for(; _min <= _max; _min++) {
        cout << _min << endl;
    }
    return 0;
}
