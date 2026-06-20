/** 
    E. Easter Eggs
 *  author:  BetterCallUssif
 *  created: 20.06.2026
    URL : https://codeforces.com/gym/104257/problem/E
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
    int t;
    cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;

        if (c == 0) { 
            if (a > b) cout << "Eason\n";
            else cout << "Emil\n";
        } else { 
            if (b > a) cout << "Emil\n";
            else cout << "Eason\n";
        }
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
    // just normal comment for nonsense readers...
    return 0;
}
