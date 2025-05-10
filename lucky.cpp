#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,tong = 0,lucky = 0;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        tong += a[i];
    }
    for (int i = 0;i < n - 1; i++){
        lucky += a[i]*(tong - a[i]);
        tong -= a[i];
    }
    cout << lucky << endl;
}