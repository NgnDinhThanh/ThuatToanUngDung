#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;

int t;
int n, c, a[MAXN];

bool check(int distance) {
    int sl = 1;
    int last = a[1];
    for (int i = 2; i <= n; i++) {
        if (a[i] - last >= distance) {
            sl += 1;
            last = a[i];
            if (sl >= c) return true;
        }
    }
    return false;
}

int MaxDistance() {
    int l = 0;  int r = a[n] - a[1];
    while (l <= r) {
        int mid = (l+r)/2;
        if (check(mid)) l = mid + 1;
        else r = mid -1;
    }
    return r;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> c;
        for (int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        cout << MaxDistance() << endl;
    }
    return 0;
}