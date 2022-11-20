#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s, tong;
  bool f = true;
  s = 0;
  tong = 0;
  cin >> n;
  int a[10000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int j = 0; j < n; j++) {
    for (int i = j + 1; i < n; i++) {
      tong = a[j] + a[i];
      for (int lap = 2; lap < tong; lap++) {
        if (tong % lap == 0) {
          f = false;
          break;
        }
      }
      if (f == true) {
        s++;
      }
      f = true;
    }
  }
  cout << s;
}