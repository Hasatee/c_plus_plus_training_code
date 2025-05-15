#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t1,t2,t3,t4,lonnhat;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    t1 = a[0]*a[1]*a[n-1];
    t2 = a[0]*a[1];
    t3 = a[n-1]*a[n-2]*a[n-3];
    t4 = a[n-1]*a[n-2];
    lonnhat = max({t1 ,t2, t3, t4});
    cout << lonnhat;
}