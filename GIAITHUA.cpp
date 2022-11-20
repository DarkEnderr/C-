#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, gthua = 1;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    gthua = gthua * i;
  }
  cout << gthua << "\n";
}
