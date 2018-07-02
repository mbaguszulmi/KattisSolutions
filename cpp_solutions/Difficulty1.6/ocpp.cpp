#include <iostream>

using namespace std;

int main() {
  int N, M;
  while (1) {
    cin >> N >> M;
    if (N >= 0 && N <= 1000 && M >= 0 && M <= 1000 && M != N) break;
  }
  int chicken = M-N;
  if (chicken > 0) {
    if (chicken == 1) {
      cout << "Dr. Chaz will have " << chicken << " piece of chicken left over!" << endl;
    }
    else {
      cout << "Dr. Chaz will have " << chicken << " pieces of chicken left over!" << endl;
    }
  }
  else {
    if (chicken == -1) {
      cout << "Dr. Chaz needs " << chicken*-1 << " more piece of chicken!" << endl;
    }
    else {
      cout << "Dr. Chaz needs " << chicken*-1 << " more pieces of chicken!" << endl;
    }
  }
  return 0;
}
