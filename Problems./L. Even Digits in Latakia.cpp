#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int x; 
    cin >> x;

    int d1 = x / 10;
    int d2 = x % 10;

    if (d1 % 2 == 0 && d2 % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}
