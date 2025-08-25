#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

// fast exponentiation
long long modpow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        long long N, M;
        cin >> N >> M;
        
        long long base = (modpow(2, N, MOD) - 1 + MOD) % MOD;
        long long ans = modpow(base, M, MOD);
        
        cout << ans << "\n";
    }
    return 0;
}
