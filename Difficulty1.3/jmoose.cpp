#include <iostream>

using namespace std;

int main() {
  int l, r;
  cin >> l >> r;
  if (l==r) {
    if (l==0) {
      cout << "Not a moose" << endl;
    }
    else {
      cout << "Even " << l+r << endl;
    }
  }
  else {
    if (l > r) {
      cout << "Odd " << l*2 << endl;
    }
    else {
      cout << "Odd " << r*2 << endl;
    }
  }
  return 0;
}
