// E. Area of circle
// URL: https://codeforces.com/group/p27JFZvaQt/contest/465925/problem/E
// Date: 4/4/2026
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
    int r;
    cin >> r;

    double pi = 3.141592654;
    double area = pi * r * r;

    cout << fixed << setprecision(10) << area;

}
/*
 
*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
