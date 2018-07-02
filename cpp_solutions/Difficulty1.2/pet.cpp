#include <iostream>

using namespace std;

int main() {
  int winner[2];
  for (int i = 1; i < 6; i++) {
    int grades[4], total = 0;
    cin >> grades[0] >> grades[1] >> grades[2] >> grades[3];
    for (size_t j = 0; j < 4; j++) {
      total+=grades[j];
    }

    if (i==1) {
      winner[0] = i;
      winner[1] = total;
    }
    else {
      if (total > winner[1]) {
        winner[0] = i;
        winner[1] = total;
      }
    }
  }

  cout << winner[0] << " " << winner[1] << endl;
  return 0;
}
