#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<long long> a(n);

        int last = -1;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] > 0)
                last = i;
        }

        cout << last + 1 << '\n';
    }

    return 0;
}
