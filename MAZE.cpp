#include<bits/stdc++.h>
using namespace std;
const int Nmax = 1999;
typedef pair<int, int> ii;
int a[Nmax][Nmax], n, m, r, c, d[Nmax][Nmax];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
queue<ii>qe;

int solve() {
    qe.push(ii(r,c));
    d[r][c] = 0;
    a[r][c] = 1;
    while(!qe.empty()) {
        ii u = qe.front();
        qe.pop();
        for (int i = 0; i < 4; i++) {
            int x = u.first + dx[i];
            int y = u.second + dy[i];
            if (x < 1 || y <1 || x > m || y > n) return d[u.first][u.second] +1;
            if (a[x][y] != 1) {
                d[x][y] = d[u.first][u.second] + 1;
                qe.push(ii(x,y));
                a[x][y] = 1;
            }
        }
    }
    return -1;
}
int main() {
    cin >> m >> n >> r >> c;
    for (int i = 1; i <= m; i++)
    for (int j = 1; j <= n; j++)
    cin >> a[i][j];
    int ans = solve();
    cout << ans;
    return 0;
}