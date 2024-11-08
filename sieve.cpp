#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
vector<bool> is_prime;
void sieve(int n){
  primes.clear();
  is_prime.assign(n+1,1);
  is_prime[0]=is_prime[1]=0;
  for(int i=2;i<=n;i++){
    if(is_prime[i]){
      primes.push_back(i);
      for(int j=i*i;j<=n;j+=i){
        is_prime[j]=0;
      }
    }
  }
}
