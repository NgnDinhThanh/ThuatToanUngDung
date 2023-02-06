#include <bits/stdc++.h>
using namespace std;
int main () {
    unsigned long long a, b;
    cin >> a >> b;
    unsigned long long a0 = a % 10;
    unsigned long long a1 = a / 10;
    unsigned long long b0 = b % 10;
    unsigned long long b1 = b / 10;
    unsigned long long c = a0 + b0;
    unsigned long long c0 = c % 10;
    unsigned long long c1 = c / 10;
    c1 += a1 + b1;
    if (c1 > 0) cout << c1;
    cout << c0;
    return 0;
 }