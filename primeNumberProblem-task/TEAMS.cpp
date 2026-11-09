#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1000000007;

long long power(long long b, long long e) {
    long long r = 1;
    b %= MOD;
    while (e > 0) {
        if (e & 1) r = r * b % MOD;
        b = b * b % MOD;
        e >>= 1;
    }
    return r;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        long long n;
        scanf("%lld", &n);
        long long ans = (n % MOD) * power(2, n - 1) % MOD;
        printf("Case #%d: %lld\n", i, ans);
    }
    return 0;
}