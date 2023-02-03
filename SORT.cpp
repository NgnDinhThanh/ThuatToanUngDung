#include <algorithm>
#include <iostream>
using namespace std;
int main(){
int N = 6;
double a[N] = {1.1, 5.5, 7.7, 2.2, 8.8, 3.3};
sort(a+3,a+N,greater<double>());// decreasing order
for(int i = 0; i < N; i++) cout << a[i] << " ";
cout << endl;
sort(a,a+N);
for(int i = 0; i < N; i++) cout << a[i] << " ";
}