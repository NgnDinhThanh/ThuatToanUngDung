#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> V(3,100); // initialize 3 elements 100
for(int v = 0; v <= 10; v++)
V.push_back(v);
cout << "vector: ";
for(int i = 0; i < V.size(); i++){
cout << V[i] << " ";
}
}