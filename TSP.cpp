#include <bits/stdc++.h>
#define N 30
#define INF 10000000
using namespace std;

int n,m;
int c[N][N];
int x[N];
int mark[N];
int cm;
int f, f_min;

void readData() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
    for (int j = 1; j <= n; j++)
    c[i][j] = INT_FAST32_MAX;
    cm = INF;

    for (int k = 1; k <= n; k++) {
        int i, j, d;
        cin >> i >> j >> d;
        c[i][j] = d;
        if (c[i][j] < cm) cm = c[i][j];
    }
}

void updateBest() {
    if (f+ c[x[n]][x[1]] < f_min) {
        f_min = f+ c[x[n]][x[1]];
    }
}

void Try(int k) {
    for (int v = 1; v <= n; v++) {
        if (mark[v] == 0) {
            x[k] = v;
            f = f+c[x[k-1]][x[k]];
            mark[v] = 1;
            if (k == n) updateBest();
            else {
                int gk = f + cm * (n-k+1);
                
                if (gk < f_min)
                Try(k+1);
            }
            f = f-c[x[k-1]][x[k]];
            mark[v] = 0;
    }
}
}

int main() {
    readData();
    f = 0;
    f_min = INT_FAST32_MAX;
    for (int v = 1; v <= n; v++)
    mark[v] = 0;
    x[1] = 1;
    mark[1] = 1;
    Try(2);
    cout << f_min;
    return 0;
}