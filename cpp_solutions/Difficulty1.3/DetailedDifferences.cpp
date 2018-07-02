#include <iostream>

using namespace std;

void diff(string* ans, size_t x, string a, string b) {
    *ans = "";
    for(size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            *ans=*ans+"*";
        }
        else {
            *ans=*ans+".";
        }
    }
}

int main(int argc, char const *argv[]) {
    size_t n;
    cin >> n;
    string str[n][2];
    string ans[n];
    
    for(size_t i = 0; i < n; i++) {
        for(size_t j = 0; j < 2; j++) {
            cin >> str[i][j];
        }
        diff(&ans[i], i, str[i][0], str[i][1]);
    }
    
    for(size_t i = 0; i < n; i++) {
        cout << str[i][0] << endl;
        cout << str[i][1] << endl;
        cout << ans[i] << endl << endl;
    }
    
    return 0;
}
