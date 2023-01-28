#include <bits/stdc++.h>
#define N 100001

using namespace std;

typedef struct Segment{
    int a, b;
}Segment;

Segment s[N];
int n;
int ans;

void input() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i].a >> s[i].b;
    }
}

bool compare_bi(Segment x, Segment y) {
    return x.b < y.b;
}

void solve() {
    sort(s+1, s+n, compare_bi);
    int last = -1000000;
    ans = 0;
    for (int i = 1; i <= n; i++) {
        if(s[i].a > last) {
            ans += 1;
            last = s[i].b;
        }
    }
    cout << ans;
}
using namespace std;

int main() {
    input();
    solve();
    return 0;
}