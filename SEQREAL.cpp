#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;
  int a[1000];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int sum, tongam, tongduong, tongvitrichan, tongvitrile = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      tongduong = tongduong + a[i];
    }
    if (a[i] < 0) {
      tongam = tongam + a[i];
    }
    if ((i + 1) % 2 == 0) {
      tongvitrichan = tongvitrichan + a[i];
    }
    if ((i + 1) % 2 == 1) {
      tongvitrile = tongvitrile + a[i];
    }
    sum += a[i];
  }

  cout << sum << " " << tongam << " " << tongduong << " " << tongvitrichan
       << " " << tongvitrile;
}