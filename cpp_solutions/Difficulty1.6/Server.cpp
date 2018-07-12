// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/server
// http://www.mbaguszulmi.com

#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[])
{
    size_t n, t, i = 0, totalTime = 0;
    cin >> n >> t;
    cin.ignore();
    // int task[n];
    string taskString;
    getline(cin, taskString);
    stringstream ssin(taskString);
    // size_t i = 0;
    while (i < n && ssin.good() && totalTime <= t)
    {
        size_t task;
        ssin >> task;
        totalTime+=task;
        if (totalTime <= t) {
            i++;
        }
    }
    cout << i << endl;
    return 0;
}
