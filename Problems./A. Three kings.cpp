/**
    A. Three kings
 *  author:  BetterCallUssif
 *  created: 16.05.2026
    URL : https://codeforces.com/gym/102697/problem/080
**/
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
//cout << fixed << setprecision(16);
void solve (){
    int a, b, c, x, y, z; cin >> a >> b >> c >> x >> y >> z;

    int A = a * x;
    int B = b * y;
    int C = c * z;

    int mx = max({A, B, C});

    if (A == mx) cout << "Barley ";
    if (B == mx) cout << "Hops ";
    if (C == mx) cout << "Malt ";

}
/*
*/
signed main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //freopen("input.txt", "r", stdin);
    //freopen("guess.out", "w", stdout);
    solve();
    return 0;
}
