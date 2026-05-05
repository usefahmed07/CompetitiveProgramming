/**
      K - The Secret Comparison 
 *    author:  BetterCallUssif
 *    created: 05.05.2026 17:18:32
      URL : https://codeforces.com/gym/104617/problem/A
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
    int x , y; cin >> x >> y; 
    if (x == y){
        cout <<"even even seven EIeven."<<"\n";
    }
    else if (x > y){
        cout <<"orz teralem is the king!"<<"\n";
    }
    else {
        cout <<"orz overflowker is the king!"<<"\n";
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
