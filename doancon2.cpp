#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int s, stt, stt1 = 0;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			stt = a[i] + a[j];
			stt1 = stt + a[j + 1];
			if (stt < stt1) {
				stt = stt1;
			} else {
				stt1 = 0;
			}
			if (s < stt) {
				s = stt;
				stt = 0;
			} else {
				stt = 0;
			}
		}
	}
	cout << s;
}