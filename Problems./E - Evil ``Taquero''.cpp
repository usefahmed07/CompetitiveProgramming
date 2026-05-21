/**
    E. Evil "Taquero"
 *  author:  BetterCallUssif
 *  created: 21.05.2026
    URL : https://codeforces.com/gym/106540/problem/E
*
*/
// "Wake up to reality. Nothing ever goes as planned in this accursed world." – Madara Uchiha
#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define F first
#define S second
#define f(i, a, b) for (int i = a; i < b; i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define mp(x, y) make_pair(x, y)
#define popCnt(x) (__builtin_popcountll(x))
#define int ll
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
const int N = 2e6 + 5, A = 26, LG = 19, MOD = 1e9 + 7;
const long double PI = acos(-1);
const long double EPS = 1e-7;
//cout << fixed << setprecision(16);
void solve() {
    string s; cin >> s;

    string res;
    string target = "mesero";
    string replace = "taquero";

    int n = s.size();
    int m = target.size();

    for (int i = 0; i < n; ) {
        if (i + m <= n && s.substr(i, m) == target) {
            res += replace;
            i += m;
        } else {
            res += s[i];
            i++;
        }
    }

    cout << res << "\n";
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
