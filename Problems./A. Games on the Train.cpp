/** 
    A. Games on the Train
 *  author:  BetterCallUssif
 *  created: 13.06.2026
    URL : https://codeforces.com/contest/2236/problem/A
**/
/// I am snatchin chains and burnin' tattoos
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
// fixed << setprecision()
void solve() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            int h; cin >> h;
            mn = min(mn, h);
            mx = max(mx, h);
        }
        cout << mx - mn + 1 << '\n';
    }
}
/*
*/
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    cout.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("guess.out", "w", stdout);
    solve();
    return 0;
}
