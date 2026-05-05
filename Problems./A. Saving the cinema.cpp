/**
      A. Saving the cinema
 *    author:  BetterCallUssif
 *    created: 05.05.2026 
      URL : https://codeforces.com/gym/104745/problem/A
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
   string x; cin >> x;
   if (x == "Spock"){
    cout <<"Pertenece a Star Trek."<<"\n";
   }
   else if (x == "Yoda"){
    cout <<"Pertenece a Star Wars."<<"\n";
   }
   else {
    cout <<"No pertenece ni a Star Wars ni a Star Trek."<<"\n";
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
