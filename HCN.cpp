#include <iostream>
using namespace std;

int main() {
  int n, m, a;
  string s;
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap m: ";
  cin >> m;
  a = n;
  while (m != 0) {
    while (n != 0) {
      cout << "#";
      n--;
    }
    while (n == 0) {
      n = a;
    }
    cout << "\n";
    m--;
  }
  cout << s;
}