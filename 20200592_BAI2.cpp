#include<bits/stdc++.h>
using namespace std;
vector <int> V;
int n;
void input() {
    cin >> n;
    for (int i = 0; i <n; i++) {
        int v;
        cin >> v;
        V.push_back(v);
    }
}

int  delete_max() {
    sort(V.begin(), V.end());
    int u = V[V.size() - 1];
    V.pop_back();
    return u;
}

int main() {
    input();
    string type;
    do {
        cin >> type;
        if (type == "*") continue;
        if (type == "insert") {
            int x;
            cin >> x;
            V.push_back(x);
        }
        else if (type == "delete-max") {
            cout << delete_max() << endl;
        }
    } while (type != "*");
    return 0;
}