#include <iostream>

using namespace std;

int main() {
  int n;
  while (1) {
    cin >> n;
    if (n >= 1 && n <= 20) break;
  }
  int val[n];

  for (int i = 0; i < n; i++) {
    while (1) {
      cin >> val[i];
      if (val[i] >= -10 && val[i] <= 10) break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (val[i]%2==0) {
      cout << val[i] << " is even" << endl;
    }
    else {
      cout << val[i] << " is odd" << endl;
    }
  }
  return 0;
}
