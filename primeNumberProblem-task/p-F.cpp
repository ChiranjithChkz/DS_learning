// #include <iostream>
// #include <vector>
// #include <cstdio>
// using namespace std;

// const int LIMIT = 20000000;

// int main() {
//     vector<bool> composite(LIMIT + 3, false);
//     composite[0] = composite[1] = true;
//     for (long long i = 2; i * i <= LIMIT + 2; i++)
//         if (!composite[i])
//             for (long long j = i * i; j <= LIMIT + 2; j += i)
//                 composite[j] = true;

//     vector<int> twins;
//     twins.reserve(100000);
//     for (int p = 3; p + 2 <= LIMIT + 2 && twins.size() < 100000; p += 2)
//         if (!composite[p] && !composite[p + 2])
//             twins.push_back(p);

//     int s;
//     while (scanf("%d", &s) == 1)
//         printf("(%d, %d)\n", twins[s - 1], twins[s - 1] + 2);

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int LIMIT = 20000000;

    vector<bool> isPrime(LIMIT + 3, true);

    isPrime[0] = false;
    isPrime[1] = false;

    // Sieve of Eratosthenes
    for(int i = 2; i * i <= LIMIT + 2; i++)
    {
        if(isPrime[i])
        {
            for(int j = i * i; j <= LIMIT + 2; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    // Store twin primes
    vector<int> twins;

    for(int i = 3; i + 2 <= LIMIT + 2; i += 2)
    {
        if(isPrime[i] && isPrime[i + 2])
        {
            twins.push_back(i);
        }
    }

    // Answer queries
    int n;

    while(cin >> n)
    {
        cout << "(" << twins[n - 1]
             << ", " << twins[n - 1] + 2 << ")" << endl;
    }

    return 0;
}