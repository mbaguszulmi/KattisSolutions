#include <iostream>

using namespace std;

int main() {
  int X, N, unused=0;
  cin >> X;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int P;
    cin >> P;
    unused += X-P;
  }

  cout << X+unused << endl;
  return 0;
}
