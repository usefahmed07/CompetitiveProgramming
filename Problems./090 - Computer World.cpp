/**
    090. Computer World
 *  author:  BetterCallUssif
 *    created: 14.05.2026
    URL : https://codeforces.com/gym/102697/problem/090
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
    string s; cin >> s;

    s.pop_back(); 
    s.pop_back(); 

    int x = stoll(s); 

    if (x <= 200){
        cout << "SMALL\n";
    }
    else if (x <= 500){
        cout << "MEDIUM\n";
    }
    else {
        cout << "LARGE\n";
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
