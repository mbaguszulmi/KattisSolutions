// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/kornislav
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

int main() {
    int walk[4];
    cin >> walk[0] >> walk[1] >> walk[2] >> walk[3];

    for(size_t i = 0; i < 3; i++) {
        int idx = i, temp;
        for(size_t j = i+1; j < 4; j++) {
            if (walk[idx] < walk[j]) {
                idx = j;
            }
        }
        temp = walk[i];
        walk[i] = walk[idx];
        walk[idx] = temp;
    }
    
    cout << walk[1]*walk[3] << endl;
    return 0;
}
