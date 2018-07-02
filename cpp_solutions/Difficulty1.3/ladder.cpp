#include <iostream>
#include <math.h>

using namespace std;

double get_radian(int degree) {
  return degree*(M_PI/180);
}

int main() {
  int h, v;
  cin >> h >> v;
  cout << (int)(h/sin(get_radian(v)))+1 << endl;
  return 0;
}
