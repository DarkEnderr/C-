#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    s = n/6;
    cout << s << "\n";
    int i = 6;
    while (i <= n)
    {
        cout << i << " ";
        i = i + 6;
    }
}
