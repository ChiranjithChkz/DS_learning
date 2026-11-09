#include <bits/stdc++.h>
using namespace std;

int main() {
    const int MAX = 1000000;
    vector<bool> comp(MAX + 1, false);
    comp[0] = comp[1] = true;

    for (int i = 2; (long long)i * i <= MAX; i++) {
        if (!comp[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                comp[j] = true;
            }
        }
    }

    int n;
    while (scanf("%d", &n) == 1 && n != 0) {
        printf("%d:\n", n);
        bool found = false;
        for (int p = 2; p <= n / 2; p++) {
            if (!comp[p] && !comp[n - p]) {
                printf("%d+%d\n", p, n - p);
                found = true;
                break;
            }
        }
        if (!found) {
            printf("NO WAY!\n");
        }
    }
    return 0;
}