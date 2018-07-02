#include <iostream>

using namespace std;

int main() {
  int distance[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
  for (size_t i = 0; i < 10; i++) {
    int n, total_distance = 0, s, t, t_before = 0;
    cin >> n;

    if (n!=-1) {
      for (size_t j = 0; j < n; j++) {
        cin >> s >> t;
        total_distance+=s*(t-t_before);
        t_before = t;
      }
      distance[i] = total_distance;
    }
    else {
      break;
    }
  }

  for (size_t i = 0; i < 10; i++) {
    if (distance[i] > 0) {
      cout << distance[i] << " miles" << endl;
    }
    else {
      break;
    }
  }
  return 0;
}
