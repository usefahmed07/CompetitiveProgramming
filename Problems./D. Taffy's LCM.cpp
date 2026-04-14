#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll c;
        cin >> c;

        if (c % 2 == 1) {
            ll a = c / 2;
            ll b = c - a;
            cout << a * b << "\n";
        } else {
            ll a = c / 2 - 1;
            ll b = c / 2 + 1;
            cout << a * b << "\n";
        }
    }
}
