#include <bits/stdc++.h>
using namespace std;
int main(){
map<pair<int,int>, pair<int,int> > m2;
m2[pair<int,int>(2,5)] = pair<int,int>(20,50);
m2[pair<int,int>(3,5)] = pair<int,int>(30,50);
int i = 3;
int j = 5;
pair<int,int> p = m2[pair<int,int>(i,j)];
cout << p.first << "," << p.second << endl;
}