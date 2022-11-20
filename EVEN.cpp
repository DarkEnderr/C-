#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) cout << "";
    else
    {
        int i = 2;
        while (i <= n)
        {
            cout << i << " ";
            i = i + 2;
        }
    }
}
