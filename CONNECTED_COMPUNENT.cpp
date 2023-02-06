#include<bits/stdc++.h>
#define MAX_N 100001
using namespace std;
int N, M;
vector<int> A[MAX_N];
int visited[MAX_N];
int ans;

void input() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        int u, v;
        cin >> u >> v;
        A[u].push_back(v);
        A[v].push_back(u);
    }
}

void init() {
    for (int i = 1; i <= N; i++) visited[i] = 0;
}

void DFS(int u) {
    for (int j = 0; j <A[u].size(); j++) {
        int v = A[u][j];
        if (!visited[v]) {
            visited[v] = 1;
            DFS(v);
        }
    } 
}

void solve() {
    init();
    ans = 0;
    for (int v = 1; v <= N; v++) if(!visited[v]) {
        ans++;
        DFS(v);
    }
    cout << ans;
}

int main() {
    input();
    solve();
    return 0;
}