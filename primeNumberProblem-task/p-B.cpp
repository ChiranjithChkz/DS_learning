#include <bits/stdc++.h>
using namespace std;

int main() {
    const int LIM = 46341;
    vector<bool> comp(LIM + 1, false);
    vector<int> primes;
    for (int i = 2; i <= LIM; i++) {
        if (!comp[i]) {
            primes.push_back(i);
            for (long long j = (long long)i * i; j <= LIM; j += i)
                comp[j] = true;
        }
    }

    long long n;
    while (scanf("%lld", &n) == 1) {
        long long m = n, res = 1;
        for (int p : primes) {
            if ((long long)p * p > m) break;
            if (m % p == 0) {
                int e = 0;
                while (m % p == 0) {
                    m /= p;
                    e++;
                }
                for (int i = 0; i < p; i++) res *= e;
            }
        }
        printf("%lld %lld\n", n, res);
    }
    return 0;
}