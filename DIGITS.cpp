#include<bits/stdc++.h>
using namespace std;
int X[7]; //X[0] = I, X[1] = C, X[2] = T, X[3] = K, X[4] = H, X[5] = U, X[6] = S
int N;
int appeared[10];
int ans;

void solution() {
    int T = X[0] * 100 + X[1] * 10 + X[2] -X[3] * 100 -62 + X[4] * 1000 + X[5] * 100 + X[6] * 10 + X[2];
    if (T == N) 
    ans++;
}

void init() {
    for (int v = 1; v <= 9; v++) appeared[v] = 0;
}

void Try(int k) {
    for (int v = 1; v <= 9; v++) {
        if (appeared[v] == 0) {
            X[k] = v;
            appeared[v] = 1;
            if (k == 6) solution();
            else Try(k+1);
            appeared[v] = 0;
        }
    }
}

int main() {
    cin >> N;
    init();
    ans = 0;
    Try(0);
    cout << ans;
    return 0;
}