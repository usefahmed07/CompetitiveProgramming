/**
      A. Adventure in Flatland
 *    author:  BetterCallUssif
 *    created: 06.05.2026
      URL : https://codeforces.com/gym/104842/problem/A
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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 > 0 && x2 > 0 || x1 < 0 && x2 < 0) &&
        (y1 > 0 && y2 > 0 || y1 < 0 && y2 < 0)) {
        cout << 0 <<"\n";
    } else {
        cout << 1 <<"\n";
    }
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
