#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, s;
	s = 0;
	cin >> n >> x;
	int a[10000];
	for (int i=0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		if (a[i] + a[i - 1] == x) {
			s++;
		}
	}
	cout << s;
}