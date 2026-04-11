#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Student {
    int want, cost, idx;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Student> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].want;
        v[i].idx = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> v[i].cost;
    }

    // sort by cost descending
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.cost > b.cost;
    });

    set<int> seats;
    for (int i = 1; i <= n; i++) {
        seats.insert(i);
    }

    vector<int> ans(n);
    ll total = 0;

    for (auto &s : v) {
        if (seats.count(s.want)) {
            ans[s.idx] = s.want;
            seats.erase(s.want);
        } else {
            int x = *seats.begin();
            ans[s.idx] = x;
            seats.erase(x);
            total += s.cost;
        }
    }

    cout << total << "\n";
    for (int x : ans) cout << x << " ";
}
