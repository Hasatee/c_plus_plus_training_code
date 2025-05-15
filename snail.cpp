#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin>>n>>t;
    if(n%4 == 0) cout << t + n/2;
    else if(n%4 == 1) cout << t - 1;
    else if(n%4 == 2) cout << t - (n+2)/2;
    else if(n%4 == 3) cout << t;
    return 0;
}