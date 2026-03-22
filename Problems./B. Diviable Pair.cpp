// B. Diviable Pair
// URL: https://codeforces.com/group/HvuaG7IByy/contest/502878/problem/B
// Time: 3/23/2026, 17:20:42 AM
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
    int t; cin >> t;
    while (t--){
        int a , b; cin >> a >> b;
        if (a == 0 || b == 0) {
            cout << "NO\n";
            continue;
        }
        if (a % b != 0 && b % a != 0){
            cout <<"YES"<<"\n";
        }
        else {
            cout <<"NO"<<"\n";
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
