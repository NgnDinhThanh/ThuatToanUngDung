#include <bits/stdc++.h>

using namespace std;

#define MAX_N 100001

int N, M;
vector<int> A[MAX_N];
int d[MAX_N];// d[v] is the level of d

void input(){
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        int u,v;
        cin >> u >> v;
        A[u].push_back(v);
        A[v].push_back(u);
    }
}

int BFS(int u) {
    queue<int> Q;
    Q.push(u);
    d[u] = 0;
    while(!Q.empty()) {
        int v = Q.front(); Q.pop();
        for(int i = 0; i < A[v].size(); i++){
            int x = A[v][i];
            if(d[x] > -1) {
                if(d[v] % 2 == d[x] % 2) return 0;
            } else {
                d[x] = d[v] + 1;
                Q.push(x);
            }
        }
    }
}

void solve() {
    //init();
    int ans = 1;
    for(int v= 1; v <= N; v++) if(d[v]== -1) {
        if(!BFS(v)) {
            ans = 0; break;
        }
    }
    cout << ans ;
}

int main() {
    input();
    solve();
}