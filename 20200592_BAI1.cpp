#include<bits/stdc++.h>
using namespace std;
int a[10001];
int n, k, A, B, q, s;

int main() {
    cin >> n >> k >> A >> B;
    for (int i = 1; i <= n; i++) cin >> a[i];
    q = 0;
    for (int i = 1; i <= n-k+1; i++) {
        s = 0;
        for (int j = i; j<= i+k-1; j++) {
            s += a[j];
        }
        if (s >= A && s <= B) q += 1;
    }
    cout << q;
    return 0;
}