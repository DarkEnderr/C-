#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, s;
	cin >> n;
	a=n;
	s=0;
	while (n!=0) {
		s = s*10 + n%10;
		n = n/10;
	}
	if(s==a) {
		cout << "Yes";
	} else {
		cout << "No";
	}
}