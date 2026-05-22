#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k, T;
    cin >> t >> k >> T;

    int finish = -1;
    int cnt = 0;

    for (int i = 0; i <= T; i += t) {
        if (i >= finish) {
            cnt++;
            finish = i + k;
        }
    }

    cout << cnt << '\n';
}
