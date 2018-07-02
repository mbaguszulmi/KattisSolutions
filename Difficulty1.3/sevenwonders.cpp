#include <iostream>

using namespace std;

bool check(string ans) {
  for (size_t i = 0; i < ans.length(); i++) {
    if (ans[i] != 'T' && ans[i] != 'C' && ans[i] != 'G') {
      return false;
    }
  }
  return true;
}

int main() {
  string ans;
  cin >> ans;
  bool nice = check(ans);
  if (nice) {
    int T = 0, C = 0, G = 0, score;
    for (size_t i = 0; i < ans.length(); i++) {
      if (ans[i] == 'T') {
        T++;
      }
      else if (ans[i] == 'C') {
        C++;
      }
      else if (ans[i] == 'G') {
        G++;
      }
    }
    score = (T*T)+(C*C)+(G*G);
    // if (T > 0 && C > 0 && G > 0) {
    //   score+=7;
    // }
    while (T > 0 && C > 0 && G > 0) {
      score+=7;
      T--;
      C--;
      G--;
    }
    cout << score << endl;
  }
  return 0;
}
