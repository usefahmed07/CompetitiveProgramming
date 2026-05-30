#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> g(N + 1);

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<int> vis(N + 1, 0);
    queue<int> q;

    q.push(N - 1);
    vis[N - 1] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : g[u]) {
            if (v == N || vis[v]) continue;
            vis[v] = 1;
            q.push(v);
        }
    }

    string ans(N, 'A');

    for (int i = 1; i <= N; i++) {
        if (vis[i]) ans[i - 1] = 'B';
    }

    cout << ans << '\n';
    return 0;
}
