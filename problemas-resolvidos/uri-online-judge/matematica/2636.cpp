#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>

using namespace std;

#define MAXN 1000000

typedef long long ll;

void sieveOfEratosthenes(ll n, vector<bool>& prime) 
{ 
    for (int p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
}

int main(void) {
    ll n;
    cin >> n;
    vector<bool> p(MAXN + 100, true);
    ll x = MAXN;
    sieveOfEratosthenes(x, p);
    while(n) {
        ll aux = 2, count = 0, orig = n;
        ll res[3];
        while(n != 1) {
            if (p[aux]) {
                if (n % aux == 0) {
                    n /= aux;
                    res[count++] = aux;
                }
            }
            aux++;
        }
        printf("%lld = %lld x %lld x %lld\n", orig, res[0], res[1], res[2]);
        cin >> n;
    }
    return 0;
}