#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll a, b, x;
        cin >> a >> b >> x;

        ll ropes = (b + x - 1) / x;
        ll need = b + ropes;

        if (a >= need)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
