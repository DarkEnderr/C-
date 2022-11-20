#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool d = true;
	int sodep = 0;
	int a[1000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

		for (int i = 0; i < n; i++) {
		while(a[i]!=0) {
			if(((a[i]%10)!=6) && ((a[i]%10)!=8)) {
				d = false;
				break;
			}
			a[i] = a[i]/10;
		}
		if (d != false) {
			sodep++;
			d = true;
		}
	}

	cout << sodep;
}