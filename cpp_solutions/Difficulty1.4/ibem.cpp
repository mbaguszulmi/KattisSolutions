#include <iostream>

using namespace std;

bool exists(string cities[], int n, string city) {
  for (int i = 0; i < n; i++) {
    if (city==cities[i]) {
      return true;
    }
  }
  return false;
}

int main() {
  int T;
  cin >> T;
  int numOfCities[T];
  for (int i = 0; i < T; i++) {
    numOfCities[i] = 0;
    int n;
    cin >> n;
    string cities[n];
    for (int j = 0; j < n; j++) {
      string city;
      cin >> city;
      if (!exists(cities, n, city)) {
        numOfCities[i]++;
        cities[j]=city;
      }
    }
  }

  for (int i = 0; i < T; i++) {
    cout << numOfCities[i] << endl;
  }
  return 0;
}
