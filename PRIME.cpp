#include <bits/stdc++.h>
using namespace std;
int N;
int main()
{
    cin >> N;
    else
    {
        int b = sqrt(N);
        bool d = true;
        for (int i = 2; i <= b; i++)
        {
            if ((N%i) == 0)
            {
                d = false;
                break;
            }
        }
        if (d == true) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
