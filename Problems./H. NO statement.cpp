#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }

    for (auto x : freq) {
        if (x.second == 1) {
            cout << x.first << endl;
            break;
        }
    }

    return 0;
}
