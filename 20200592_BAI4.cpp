#include <bits/stdc++.h>
int n;

using namespace std;

int findLargestSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> dp(n, 0);
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    return dp[n-1];
}

int main() {
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    cout << findLargestSum(arr) << endl;
    return 0;
}
