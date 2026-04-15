// BEGIN: main.cpp
// H. Fair Grading
// URL : https://codeforces.com/gym/105859/problem/H
// Date: 4/15/2026
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
    int x, y, z; 
    cin >> x >> y >> z;

    int F = (x + y + 2*z) / 4;

    if (F >= 90) {
        cout << "A\n";
    }
    else if (F >= 80) {
        cout << "B\n";
    }
    else if (F >= 70) {
        cout << "C\n";
    }
    else if (F >= 60) {
        cout << "D\n";
    }
    else {
        cout << "F\n";
    }
}
/*
 
*/
signed main() {
    // UseFile();
    ios::sync_with_stdio(false); cin.tie(nullptr);
    solve();
    return 0;
}// END: main.cpp
