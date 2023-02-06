#include<bits/stdc++.h>
using namespace std;

map <string, int> numberAccouts, totalfMoney, inspectCycle;
string Acc[1000001];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    string f_account;
    string type;
    int totalTransactions = 0;
    int totalMoney = 0;
    int N = 0;
    do {
        cin >> f_account;
        if (f_account == "#") continue;
        ++totalTransactions;
        string t_account, money, time, atm;
        numberAccouts[f_account]++;
        if (numberAccouts[f_account] == 1) {
            N += 1;
            Acc[N] = f_account;
        }
        numberAccouts[t_account]++;
        if (numberAccouts[t_account] == 1) {
            N += 1;
            Acc[N] = t_account;
        }
        cin >> t_account >> money >> time >> atm;
        totalMoney += atoi(money.c_str());
        totalfMoney[f_account] += atoi(money.c_str());
        inspectCycle[f_account] ++;
    }
    while (f_account != "#");

    do {
        cin >> type;
        if (type == "#") continue;
        if (type == "?number_transactions") cout << totalTransactions << endl;
        else if (type =="?total_money_transaction") cout << totalMoney << endl;
        else if (type == "?list_sorted_accounts") {
            sort(Acc+1, Acc+N);
            cout << Acc[1];
            for (int i = 2; i <= N; i++) cout <<Acc[i] + " ";
            cout <<endl;
        }
        else if (type == "?total_money_transaction_from") {
            string account;
            cin >> account;
            cout << totalfMoney[account] << endl;
        }
        else if (type == "?inspect_cycle") {
            string account;
            cin >> account;
            int k;
            cin >> k;
            if (inspectCycle[account] == k) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
    while (type != "#");
    return 0;
}