#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (auto it : cnt) {
        if (it.second % 2 == 1) {
            cout << it.first << endl;
            return 0;
        }
    }
}