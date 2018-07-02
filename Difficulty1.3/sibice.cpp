#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int N, W, H;
  cin >> N >> W >> H;
  float hypotenuse = sqrt(pow(W, 2)+pow(H, 2));
  string fit[N];

  for (int i = 0; i < N; i++) {
    int len;
    cin >> len;
    if (len <= hypotenuse) {
      fit[i] = "DA";
    }
    else {
      fit[i] = "NE";
    }
  }

  for (int i = 0; i < N; i++) {
    cout << fit[i] << endl;
  }
  return 0;
}
