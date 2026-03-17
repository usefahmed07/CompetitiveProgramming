// M. Coach Academy PST
// URL: https://codeforces.com/group/Rilx5irOux/contest/562071/problem/M
// Time: 3/17/2026, 16:51:42 AM
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll  long long
#define vi          vector<int>
#define pii         pair<int, int>
#define all(v)      v.begin(), v.end()
#define finish(s)   { cout << s << "\n"; return; }
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
void FastIO() { cin.tie(nullptr)->sync_with_stdio(false); }
void UseFile() { freopen("file.in", "r", stdin); freopen("file.out", "w", stdout); }
const int MOD = 1000000007, INF = 2e18;
// fixed << setprecision()
void solve() {
   int n;
    cin >> n;

    int L1, L2, L3, L4;
    cin >> L1 >> L2 >> L3 >> L4;

    if (n >= L4) cout << 4;
    else if (n >= L3) cout << 3;
    else if (n >= L2) cout << 2;
    else if (n >= L1) cout << 1;
    else cout << -1;
}
/*
 
*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
