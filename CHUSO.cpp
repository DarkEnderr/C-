#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int i = 0;
  int s = 0;
  while (n != 0) {
    i++;
    s = s + n % 10;
    n /= 10;
  }
  cout << i << " " << s;
}
