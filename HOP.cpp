#include <iostream>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    if (n%k == 0){
        cout << n/k << endl;
    } else {
        cout << n/k + 1 << endl;
    }
}