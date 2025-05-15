#include <bits/stdc++.h>
using namespace std;

int main(){
    long long w, h, n, max_x = 0, max_y = 0;
    cin >> w >> h >> n;
    vector<long long> x(n), y(n);
    x.push_back(0);
    x.push_back(w + 1);
    y.push_back(0);
    y.push_back(h + 1);
    for (long long i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    for (long long i = 1; i < x.size(); i++){
        max_x = max(max_x, x[i] - x[i-1] - 1);
    }
    for (long long i = 1; i < y.size(); i++){
        max_y = max(max_y, y[i] - y[i-1] - 1);
    }
    cout << max_x * max_y << endl;
}