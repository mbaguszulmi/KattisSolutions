// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/sodasurpler
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int e, f, c, totalBotle, numOfSoda = 0;
    cin >> e >> f >> c;
    totalBotle = e+f;
    while (totalBotle >= c)
    {
        totalBotle-=c-1;
        numOfSoda++;
    }
    cout << numOfSoda << endl;
    return 0;
}
