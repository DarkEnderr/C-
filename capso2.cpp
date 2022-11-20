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

	for (int j = 0; j < n; j++) {
		for (int i = j + 1; i < n; i++) {
			if (a[j] + a[i] == x) {
			s++;
			}
		}
	}
	cout << s;
}