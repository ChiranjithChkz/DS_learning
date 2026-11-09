#include <bits/stdc++.h>
using namespace std;

long long modpow(long long b, long long p, long long m) {
    long long result = 1 % m;   
    b %= m;
    while (p > 0) {
        if (p & 1) result = (result * b) % m;
        b = (b * b) % m;
        p >>= 1;
    }
    return result;
}

int main() {
    long long B, P, M;
    while (cin >> B >> P >> M) {    
        cout << modpow(B, P, M) << "\n";
    }
    return 0;
}