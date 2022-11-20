#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N == 1) {
        cout << "ERROR";
    } else {
        int s = sqrt(N);
        int ktra = 1;
        for (int i = 2; i <= s; i++)
        {
            if ((N%i) == 0)
            {
                d = 0;
                break;
            }
        }
        if (d == 1) cout << "YES";
        else cout << "NO";
    }
}
