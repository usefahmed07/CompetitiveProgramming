// A. McQueen in the Piston Cup
// URL: https://codeforces.com/group/HvuaG7IByy/contest/549940/problem/A
// Time: 3/27/2026, 17:20:42 AM
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
    int tt; cin >> tt;
    while (tt--){
        ll a, b, c;
        cin >> a >> b >> c;

        ll mn = min({a, b, c});
        int cnt = (a == mn) + (b == mn) + (c == mn);

        if (cnt > 1) {
            cout << "draw\n";
        } else {
            if (a == mn) cout << "mcqueen\n";
            else if (b == mn) cout << "king\n";
            else cout << "chick\n";
        }
    }
}
/*
 
*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
