#include <iostream>
using namespace std;

const int MAX = 10000;
int cnt[MAX];

int main() {
  int n;
  do {
    cout << "\nNhap n = ";
    cin >> n;
  } while (n < 1);
  int a[n];
  for (int i = 0; i < n; i++) {
    do {
      cin >> a[i];
    } while (a[i] < 0);
  }
  for (int i = 0; i < MAX; i++)
    cnt[i] = 0;
  for (int i = 0; i < n; i++) {
    cnt[a[i]]++;
  }
  for (int i = 0; i < MAX; i++) {
    if (cnt[i] > 0) {
      cout << i << " " << cnt[i] << "\n";
    }
  }
}