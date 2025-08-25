#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<long long> A(N+1);
        for (int i = 1; i <= N; i++) cin >> A[i];

        long long base = 0;
        long long minOdd = LLONG_MAX, maxEven = LLONG_MIN;

        for (int i = 1; i <= N; i++) {
            long long val = abs(A[i]);
            if (i % 2 == 1) { // odd index -> positive
                base += val;
                minOdd = min(minOdd, val);
            } else { // even index -> negative
                base -= val;
                maxEven = max(maxEven, val);
            }
        }

        long long delta = 0;
        if (minOdd != LLONG_MAX && maxEven != LLONG_MIN) {
            delta = max(0LL, (maxEven - minOdd) * 2);
        }

        cout << base + delta << "\n";
    }
    return 0;
}
