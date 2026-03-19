#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n);
        ll sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        ll y1 = sum / n;
        ll y2 = y1 + 1;

        ll cost1 = 0, cost2 = 0;

        for (int i = 0; i < n; i++) {
            cost1 += (a[i] - y1) * (a[i] - y1);
            cost2 += (a[i] - y2) * (a[i] - y2);
        }

        cout << min(cost1, cost2) << "\n";
    }
}
