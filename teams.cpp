#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c,t1;
    cin >> a >> b >> c;
    t1 = min({a/2,b,(a+b-c)/3});
    cout << t1 << endl;
}