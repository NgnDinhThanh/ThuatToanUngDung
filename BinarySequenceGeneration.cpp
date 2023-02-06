#include<bits/stdc++.h>
using namespace std;
int N;
int a[20];
bool check(int v, int k) {
    return true;
}
void solution() {
    for (int i = 1; i <= N; i++) cout << a[i];
    cout << endl;
}
void Try (int k) {
    for (int v = 0; v <= 1; v++) {
        if (check(v, k)) {
            a[k] = v;
            if (k == N) solution();
            else Try(k+1);
        }
    }
}

int main() {
    cin >> N;
    Try(1);
    return 0;
}