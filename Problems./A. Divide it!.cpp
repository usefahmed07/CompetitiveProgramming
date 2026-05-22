/** 
    A. Divide it!
 *  author:  BetterCallUssif
 *  created: 22.05.2026
    URL : https://codeforces.com/contest/1176/problem/A
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
    int q; cin >> q;

    while (q--) {
        int n; cin >> n;

        int ans = 0;

        while (n % 2 == 0) {
            n /= 2;
            ans++;
        }

        while (n % 3 == 0) {
            n /= 3;
            ans += 2;
        }

        while (n % 5 == 0) {
            n /= 5;
            ans += 3;
        }

        if (n != 1)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
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
