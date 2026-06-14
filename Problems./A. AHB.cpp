/** 
    A. AHB
 *  author:  BetterCallUssif
 *  created: 14.06.2026
    URL : https://codeforces.com/gym/100796/problem/A
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
    string a, b; cin >> a >> b;

    string ans = "";

    for (int i = 0; i < a.size(); i++) {
        ans += char(abs(a[i] - b[i]) + '0');
    }

    int pos = 0;
    while (pos < ans.size() - 1 && ans[pos] == '0')
        pos++;

    cout << ans.substr(pos);
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
