#include <iostream>
using namespace std;

int main() {
  int n, a, m;
  cout << "Nhap n: ";
  cin >> n;
  m = n;
  a = n;
  while (m != 0) {
    while (n != 0) {
      cout << "*";
      n--;
    }
    a = a - 1;
    n = a;
    m--;
    cout << "\n";
  }
}