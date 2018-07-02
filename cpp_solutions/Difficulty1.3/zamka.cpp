#include <iostream>

using namespace std;

int main() {
  int L, D, X;
  string M, N;
  cin >> L;
  cin >> D;
  cin >> X;
  for (int i = L; i <= D; i++) {
    M = to_string(i);
    int sum=0;
    for (int j = 0; j < M.length(); j++) {
      sum+=(M[j]-'0');
    }
    if (sum==X) {
      break;
    }
  }

  for (int i = D; i >= L; i--) {
    N = to_string(i);
    int sum=0;
    for (int j = 0; j < N.length(); j++) {
      sum+=(N[j]-'0');
    }
    if (sum==X) {
      break;
    }
  }

  cout << M << endl << N << endl;
  return 0;
}
