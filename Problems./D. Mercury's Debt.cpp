// D. Mercury's Debt
// URL: https://codeforces.com/group/WToO2BEUSL/contest/612936/problem/D
// Date: 4/2/2026
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
    map<string, int> toInt = {
        {"I", 1}, {"II", 2}, {"III", 3}, {"IV", 4}, {"V", 5}
    };

    map<int, string> toRoman = {
        {1, "I"}, {2, "II"}, {3, "III"}, {4, "IV"}, {5, "V"},
        {6, "VI"}, {7, "VII"}, {8, "VIII"}, {9, "IX"}, {10, "X"}
    };

    string x, y;
    cin >> x >> y;

    int sum = toInt[x] + toInt[y];
    cout << toRoman[sum] << '\n';
}
/*
 
*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}
