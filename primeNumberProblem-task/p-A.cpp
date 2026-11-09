#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        int n = stoi(s.substr(2));      // parse "1/n"
        long long d = 1;
        int m = n;
        for (int p = 2; (long long)p * p <= m; p++) {
            if (m % p == 0) {
                int e = 0;
                while (m % p == 0) { m /= p; e++; }
                d *= (2 * e + 1);       // exponent doubles in n^2
            }
        }
        if (m > 1) d *= 3;              // leftover prime, exponent 1 -> 2*1+1
        cout << (d + 1) / 2 << "\n";
    }
    return 0;
}