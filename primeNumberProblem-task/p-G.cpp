#include <bits/stdc++.h>
using namespace std;

const int MAXN = 32000;
bitset<MAXN + 1> composite;

int main() {
    // 1. Sieve
    composite[0] = composite[1] = true;
    for (int i = 2; i * i <= MAXN; i++)
        if (!composite[i])
            for (int j = i * i; j <= MAXN; j += i)
                composite[j] = true;

    vector<int> p;
    for (int i = 2; i <= MAXN; i++)
        if (!composite[i]) p.push_back(i);

    // 2. Build maximal uni-distant series (3 or more primes)
    vector<vector<int>> series;
    int n = p.size();
    int i = 0;
    while (i + 1 < n) {
        int d = p[i + 1] - p[i];
        int e = i + 1;
        while (e + 1 < n && p[e + 1] - p[e] == d) e++;
        if (e - i >= 2) {
            series.push_back(vector<int>(p.begin() + i, p.begin() + e + 1));
        }
        i = e;  // next series may start from the last prime
    }

    // 3. Answer queries
    int x, y;
    while (cin >> x >> y) {
        if (x == 0 && y == 0) break;
        if (x > y) swap(x, y);
        for (auto &s : series) {
            if (s.front() >= x && s.back() <= y) {
                for (size_t k = 0; k < s.size(); k++) {
                    if (k) cout << " ";
                    cout << s[k];
                }
                cout << "\n";
            }
        }
    }
    return 0;
}