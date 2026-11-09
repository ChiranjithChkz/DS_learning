//Jumping campions

#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    while(n--)
    {
            int l, r;
            cin >> l >> r;

                vector<bool> isPrime(r+1 , true);
                isPrime[0] = false;

                if(r >=1 ) isPrime[1] = false;

                for(int i=2; i*i <= r; i++){
                    if(isPrime[i])
                    {
                        for(int j = i*i ; j<=r; j+=i)
                        {
                            isPrime[j] = false;
                        }
                    }
                }

               vector<int> primes;
               for(int i=l; i<=r; i++)
               {
                 if(isPrime[i]){
                    primes.push_back(i);
                 }
               }


               map<int, int> freq;
               for(int i=1; i<primes.size(); i++)
               {
                freq[primes[i] - primes[i-1]]++;
               }


               int maxCount=0, champion = 0, numTop = 0;
               for(auto &p: freq){

                if(p.second > maxCount){
                    maxCount = p.second;
                    champion = p.first;
                    numTop = 1;
                }
                else if (p.second == maxCount)
                {
                    numTop++;
                }
               }

                 if (numTop == 1)
                        cout << "The jumping champion is " << champion << endl;
                else
                        cout << "No jumping champion" << endl;


    }

    return 0;

}