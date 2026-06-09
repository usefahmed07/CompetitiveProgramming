#include <iostream>
using namespace std;

int main() {
    long long N, M, K, L, S;
    
    cin >> N >> M >> K >> L >> S;

    long long required = N * M * K;
    long long containers = (required + L - 1) / L;
    
    cout << containers * S << '\n';

    return 0;
}
