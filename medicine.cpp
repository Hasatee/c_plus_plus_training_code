#include <bits/stdc++.h>
using namespace std;

int main() {
    int dem = 0;
    string s;
    cin >> s;
    map<char, int> cnt;
    for (char c : s) {
        cnt[c]++;
    }

    for (auto it : cnt) {
        if (it.second >= 1) {
            dem++;
        }
    }

    cout << dem << endl;
    return 0;
}