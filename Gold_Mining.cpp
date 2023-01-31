#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int a[N], F[N];
int n, L1, L2, ans;

void solve() {
    deque<int> d;
    ans = 0;
    for (int i = 1; i <=n; i++) {
        int j = i-L1;
        while(!d.empty() && d.front() < i - L2) d.pop_front();
        if (j >= 1) {
            while (!d.empty() && F[d.back()] < F[j]) d.pop_back();
            d.push_back(j);
        }
        F[i] = a[i] + (d.empty() ? 0 : F[d.front()]);
        ans = max(ans, F[i]);
    }
    cout << ans;
}

void input() {
    cin >> n >> L1 >> L2;
    for (int i =1; i <= n; i++) cin >> a[i];
}

int main() {
    input();
    solve();
    return 0;
}