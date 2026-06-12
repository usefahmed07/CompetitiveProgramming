#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    const int MAXA = 1000000;

    vector<int> a(n);
    vector<char> present(MAXA + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        present[a[i]] = 1;
    }

    long long ans = 0;

    for (int x : a) {
        for (long long d = 1; d * (2LL * x + d) <= MAXA; d++) {
            long long val = d * (2LL * x + d);

            if (present[val]) {
                ans++;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
