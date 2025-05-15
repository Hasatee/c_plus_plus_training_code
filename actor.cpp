#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,t,n,a,b,c,dem=0;
    cin >> r >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> a >> b >> c;
        if (r == 2){
            dem = min({a, b, c});
            cout << dem << endl;
        }
        else {
            if (a + b + c <= 2 * n){
                dem = 0;
                cout << dem << endl;
            }
            else {
                dem = a + b + c - 2 * n;
                cout << dem << endl;
            }
        }
    }
}