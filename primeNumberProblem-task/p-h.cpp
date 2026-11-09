#include <bits/stdc++.h>
using namespace std;

int main() {
    const int MAXN = 10000;
    vector<bool> isPrime(MAXN + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAXN; i++)
        if (isPrime[i])
            for (int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;

    vector<int> primes;
    for (int i = 2; i <= MAXN; i++)
        if (isPrime[i]) primes.push_back(i);

    int M;
    scanf("%d", &M);
    while (M--) {
        int n;
        scanf("%d", &n);
        int bestX = 2, bestR = -1;
        for (int x : primes) {
            if (x > n) break;
            int r = n % x;
            if (r > bestR) {
                bestR = r;
                bestX = x;
            }
        }
        printf("%d\n", bestX);
    }
    return 0;
}