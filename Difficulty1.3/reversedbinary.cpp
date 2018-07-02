#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int dec;
  cin >> dec;
  int size = log2(dec)+1;
  int bin[size];
  for (size_t i = 0; dec > 0; i++) {
    bin[i]=dec%2;
    dec/=2;
  }

  for (int i = 0; i < size; i++) {
    dec+=pow(2, size-i-1)*bin[i];
  }
  cout << dec << endl;
  return 0;
}
