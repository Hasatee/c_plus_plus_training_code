#include <bits/stdc++.h>
using namespace std;

int main(){
    long double s,bp,u,v;
    cin >>u >> v;
    bp = u*u + v*v;
    s = bp/4;
    cout << fixed << setprecision(2) << s << endl;
}