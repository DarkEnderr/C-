#include <iostream>
using namespace std;

int main() {
  int n, m;
  cout << "Nhap n, m: ";
  cin >> n >> m;
  n = abs(n);
  m = abs(m);
  while ((n * m) != 0) {
    if (n < m)
      m = m % n;
    else
      n = n % m;
  }
  cout << "UCLN: " << m + n;
  return 0;
}
