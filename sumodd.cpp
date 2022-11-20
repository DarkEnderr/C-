#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int i = 1;
  long long s = 0;
  while (i <= n) {
    s = s + i;
    i = i + 2;
  }
  cout << s;
}
