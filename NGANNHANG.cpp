#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, y;
  int s;
    cin >> n >> m;
    y = 0;
    s = n;
    while(s < m)
    {
        s = s + s/10;
        y = y + 1;
    }
    cout << y;
    return 0;
}
