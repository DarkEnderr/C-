#include<bits/stdc++.h>
using namespace std;

int toigian(int a, int b, int c, int d) {
    int tu, mau = 0;
    if (d > b) {
        if (d%b==0) {
            int temp = b;
            b = b * d/b;
            a = a * d/temp;
        } else if (d%b!=0) {
            int temp = b;
            int temp1 = d;
            b = b * d;
            d = temp * b;
            a = a * temp1;
            c = c * temp;
        }
    } else if (b > d) {
        if (b%d==0) {
            int temp = d;
            d = d * b/d;
            c = c * b/temp;
        } else if (b%d!=0) {
            int temp, temp1 = d, b;
            b = b * d;
            d = d * temp1;
            a = a * temp;
            c = c * temp1;
        }
    }
    if (b==d) {
        mau = b;
        tu = a - c;
    }
    cout << tu/abs(__gcd(tu, mau)) << "/" << mau/abs(__gcd(tu, mau));
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    toigian(a, b, c, d);
}