#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        for (int i = 2; i <= N; i += 2)
            cout << i << ' ';

        for (int i = 1; i <= N; i += 2)
            cout << i << ' ';

        cout << '\n';
    }

    return 0;
}
