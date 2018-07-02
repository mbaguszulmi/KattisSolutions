#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  string result[n];

  for (int i = 0; i < n; i++) {
    int r, e, c;
    cin >> r >> e >> c;

    int profit = e-c;
    if (r < profit) {
      result[i] = "advertise";
    }
    else if (r > profit) {
      result[i] = "do not advertise";
    }
    else {
      result[i] = "does not matter";
    }
  }

  for (int i = 0; i < n; i++) {
    cout << result[i] << endl;
  }
  return 0;
}
