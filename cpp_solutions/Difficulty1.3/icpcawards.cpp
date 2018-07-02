#include <iostream>

using namespace std;

struct univ {
  string university, team;
};

bool exists(univ universities[], string university) {
  for (int i = 0; i < 12; i++) {
    if (university==universities[i].university) {
      return true;
    }
  }
  return false;
}

int main() {
  int N, count=0;
  univ universities[12];
  cin >> N;
  for (int i = 0; i < N; i++) {
    string team, university;
    cin >> university >> team;
    if (!exists(universities, university) && count < 12) {
      universities[count].university = university;
      universities[count].team = team;
      count++;
    }
  }

  for (size_t i = 0; i < 12; i++) {
    cout << universities[i].university << " " << universities[i].team << endl;
  }
  return 0;
}
