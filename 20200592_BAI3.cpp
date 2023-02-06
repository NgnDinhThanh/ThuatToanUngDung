#include <bits/stdc++.h>
using namespace std;
int q = 0;
int n, m, k;

void findCombination(vector<int>& arr, vector<int>& combination, int start, int k, int target) {
    if (k == 0 && target == 0) {
        q += 1;
    }
    if (k == 0 || target < 0) return;
    for (int i = start; i < arr.size(); i++) {
        combination.push_back(arr[i]);
        findCombination(arr, combination, i + 1, k - 1, target - arr[i]);
        combination.pop_back();
    }
}

int main() {
    vector<int> arr;
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    vector<int> combination;
    findCombination(arr, combination, 0, k, m);
    cout << q;
    return 0;
}
