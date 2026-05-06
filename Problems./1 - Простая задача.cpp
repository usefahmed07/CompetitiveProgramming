/**
      1. Простая задача
 *    author:  BetterCallUssif
 *    created: 06.05.2026
      URL : https://codeforces.com/gym/105526/problem/1
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
// fixed << setprecision()
void solve (){
    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if (b - a == 2) cout << "YES\n";
    else cout << "NO\n";

    if (d - c == 2) cout << "YES\n";
    else cout << "NO\n";
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
