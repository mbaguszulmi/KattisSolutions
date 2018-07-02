#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int repeat, value = 0;
  cin >> repeat;
  for (int i = 0; i < repeat; i++) {
    string num, num_2;
    cin >> num;
    int pow_pos = num.length()-1;
    // num+=to_string;
    for (size_t i = 0; i < pow_pos; i++) {
      num_2+=num[i];
    }
    // cout << num[pow_pos]-'0' << endl;
    value+=pow(stoi(num_2), num[pow_pos]-'0');
  }
  cout << value << endl;
  return 0;
}
