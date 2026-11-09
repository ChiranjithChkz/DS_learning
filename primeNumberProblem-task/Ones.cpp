#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int r = 1 % n, x = 1;
        while (r != 0) {
            r = (r * 10 + 1) % n;
            x++;
        }
        cout << x << endl;
    }
    return 0;
}