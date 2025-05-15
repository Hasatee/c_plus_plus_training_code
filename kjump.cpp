#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[3];
    for (int i = 0; i < t; i++){
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[1] - a[0] > a[2] - a[1]){
            cout << a[1] - a[0] - 1 << endl;
        } else {
            cout << a[2] - a[1] - 1 << endl;
        }
    }
}