#include<bits/stdc++.h>
# define N 100

using namespace std;

int x[N];
int n;

int check(int v, int k) {
    for (int i = 1; i <= k-1; i++) {
        if (x[i] == v) return 0;
        if (x[i]+i == v + k) return 0;
        if (x[i] - i == v - k) return 0;
    }
    return 1;
}
void solution() {
    for (int i = 1; i <= n; i++) {
        cout << x[i] << " ";
    }
    cout << "\n";
}

void Try(int k) {
    for (int v = 1; v <= n; v++) {
        if (check(v,k)) {
            x[k] = v;
            if (k == n) solution();
            else Try(k+1);
        }
    }
}

int main() {
    n = 8;
    Try(1);
    return 0;
}
