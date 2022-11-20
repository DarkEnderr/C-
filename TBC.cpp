#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;
  float a[1000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  float sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  cout << sum/n;
}