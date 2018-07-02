#include <iostream>

using namespace std;

int main() {
  string movement;
  int ball_pos = 1;
  cin >> movement;
  for (int i = 0; i < movement.length(); i++) {
    if (movement[i]=='A') {
      if (ball_pos==1) {
        ball_pos++;
      }
      else if (ball_pos==2) {
        ball_pos--;
      }
    }
    else if (movement[i]=='B') {
      if (ball_pos==2) {
        ball_pos++;
      }
      else if (ball_pos==3) {
        ball_pos--;
      }
    }
    else if (movement[i]=='C') {
      if (ball_pos==1) {
        ball_pos+=2;
      }
      else if (ball_pos==3) {
        ball_pos-=2;
      }
    }
  }

  cout << ball_pos << endl;
  return 0;
}
