#include<bits/stdc++.h>

using namespace std;
int n, M;
int a[20];
int x[20];
int T, R;
int ans;

void input() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) 
    cin >> a[i];
}
int check(int v, int k) {
    if (k < n) return 1;
    if (T+a[n] * v == M) return 1;
    else return 0;
}

void solution() {
    ans += 1;
}

void Try(int k) {
    for (int v = 1; v <= M-T-R; v++) {
        if (check(v, k)) {
            x[k] = v;
            T = T+a[k] * x[k];
            R = R-a[k+1];
            if (k ==n) solution();
            else Try(k+1);
            T = T-a[k]*x[k];
            R = R+a[k+1];
        }
    }
}

int main() {
    input();
    T = 0;
    R = 0;
    for (int i = 2; i <= n; i++) {
        R = R+a[i];
    }
    Try(1);
    cout << ans;
}