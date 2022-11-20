#include <iostream>
using namespace std;

int main() {
  int x, n;
  cin >> x >> n;
  long long s = 1;
  for (int i = 1; i <= n; i = i + 1) {
    s = s * x;
    }
  cout << s;
}
