#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long x, y;
        cin >> x >> y;

        long long s = max(x, y);
        cout << s * s << '\n';
    }
}
