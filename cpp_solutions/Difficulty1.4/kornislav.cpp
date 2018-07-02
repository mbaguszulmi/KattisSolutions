#include <iostream>

using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  if (C <= A && D >= B) {
    cout << B*C << endl;
  }
  else {
    int area_1, area_2;
    // cout << A*C << endl;
    if (A < C) {
      A+=C;
      C=A-C;
      A-=C;
    }

    if (B > D) {
      B+=D;
      D=B-D;
      B-=D;
    }
    area_1 = B*C;

    A+=C;
    C=A-C;
    A-=C;

    B+=D;
    D=B-D;
    B-=D;

    A+=B;
    B=A-B;
    A-=B;
    area_2 = B*C;

    if (area_1>area_2) {
      cout << area_1 << endl;
    }
    else {
      cout << area_2 << endl;
    }
  }
  return 0;
}
