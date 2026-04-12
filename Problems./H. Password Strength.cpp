// H. Password Strength
// URL : https://codeforces.com/group/ouFw4vHtOl/contest/682112/problem/H
// Date: 4/12/2026
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
     while (t--) {
        string s;
        cin >> s;

        if (s.length() < 8) {
            cout << "Weak\n";
            continue;
        }

        bool hasLower = false, hasUpper = false;
        bool hasDigit = false, hasSpecial = false;

        for (char c : s) {
            if (islower(c)) hasLower = true;
            else if (isupper(c)) hasUpper = true;
            else if (isdigit(c)) hasDigit = true;
            else hasSpecial = true;
        }

        if (hasLower && hasUpper && hasDigit && hasSpecial)
            cout << "Strong\n";
        else
            cout << "Medium\n";
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
