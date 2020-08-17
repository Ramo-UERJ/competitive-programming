#include <iostream>
#include <cmath>
#include <cstring>
#include <bitset>

using namespace std;

typedef long long ll;
  
bitset<3000020> isprime;
ll prime[3000020];
ll lim = 3000000;
  
void primo(ll *p) 
{
	ll prime_cont = 0;
	
	prime[prime_cont] = 2;
	prime_cont++;
	
    isprime.set();
    for(ll i=3; i<=lim; i+=2) 
    {
        if(isprime[i]) 
        {
            prime[prime_cont++] = i;
          
            for(ll j = i * i; j <= lim; j+= i) 
                isprime.reset(j);
        }
    }
    
    *p = prime_cont;
    
}

int fat(ll n, ll q)
{
    ll i = 0;
    int ans = 1;
    int div;
    while (n > 1 && i < q)
    {
        div = 0;
        while(n > 1 && n % prime[i] == 0)
        {
            n/= prime[i];
            div++;
        }
        i++;
        if (i > 1) ans*= (div + 1);
    }
    if (n > 1) ans *= 2;
    return ans;
}
  
int main()
{
    ll n;
    ll qtde = 0;
    primo(&qtde);
    
    while(cin >> n)
    {
        cout << fat(n, qtde) << '\n';
    }
}