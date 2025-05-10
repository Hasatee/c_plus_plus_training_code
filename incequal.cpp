#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,b,tong = 0;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n-1; i++){
        b = a.at(n-1) - a.at(i);
        if (b%x != 0){
            tong = -1;
            break;
        }
        else {
            tong += b/x;
        }
    }
    cout << tong << endl;
}