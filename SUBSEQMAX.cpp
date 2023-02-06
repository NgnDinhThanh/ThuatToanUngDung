#include<bits/stdc++.h>
using namespace std;

long long algo4 ( int *a, int n) {
    long long *s = new long long [n];
    s[0] = a [0];
    long long max = s [0];
    for ( int i = 1; i < n; i++) {
    if (s[i -1] > 0) s[i] = s[i -1] + a[i];
    else s[i] = a[i];
    max = max > s[i] ? max : s[i];
 }
    delete s;
    return max;
 }
int n;
int a[100001];
 int main() {
    cin >> n;
    for (int i = 0; i <n; i++) cin >> a[i];
    cout << algo4(a, n);
    return 0;
 }