#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ltiep, ltieptt;
  cin >> n;
  ltieptt = 1;
  ltiep = 1;
  int a[10000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= n; i++) {
    if (a[i - 1] < a[i]) {
      ltieptt++;
    }
    if (a[i - 1] >= a[i]) {
      if (ltieptt >= ltiep) {
        ltiep = ltieptt;
        ltieptt = 1;
      } else {
        ltieptt = 1;
      }
    }
  }

  if (ltieptt >= ltiep) {
    ltiep = ltieptt;
    ltieptt = 0;
  }
  cout << ltiep;
}