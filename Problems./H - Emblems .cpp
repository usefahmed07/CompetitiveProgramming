#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    long long C, M, D;
    cin >> s >> C >> M >> D;

    long long R = C + D;

    vector<pair<long long, string>> ranks = {
        {2400, "grandmaster"},
        {2100, "master"},
        {1900, "candidate master"},
        {1600, "expert"},
        {1400, "specialist"},
        {1200, "pupil"}
    };

    for (auto &[lo, name] : ranks) {
        if (M < lo && R >= lo) {
            cout << name << "\n";
            return 0;
        }
    }

    cout << "Think about it, you can do it!\n";
}
