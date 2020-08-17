#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

typedef long long ll;
 
const ll MOD = 1e9 + 7;

const ll MAXN = 2500;

bool prime[MAXN + 1]; 

void sieveOfEratosthenes(ll n) { 
    memset(prime, true, sizeof(prime)); 
    prime[0] = prime[1] = false;
    for (ll p = 2; p * p <= n; p++) { 
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
}

ll nCr(ll n, ll k) 
{
    if (k * 2 > n)
        k = n - k;
    if (k == 0) 
        return 1;

    ll res = n;

    for(ll i = 2; i <= k; ++i ) {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}
 
int main(void) {
    
    sieveOfEratosthenes(MAXN);
    ll n, m, k;
    while (cin >> n >> m >> k) {
        if (!n && !m && !k) break;

        ll total = 0;
        for (ll i = 0; i < n; i++) {
            ll count = 0;
            for (ll j = 0; j < m; j++) {
                if (!prime[i * m + j])  {
                    // cout << i * m + j << " ";
                    count++;
                }
            }
            if (count >= k) {
                total += nCr(count, k);
            }
        }

        if (k != 1) {
            for (ll i = 0; i < m; i++) {
                ll count = 0;
                for (ll j = 0; j < n; j++) {
                    // cout << i + j * m << endl;
                    if (!prime[i + j * m])  {
                        // cout << i + j * m << " ";
                        count++;
                    }
                }
                if (count >= k) {
                    total += nCr(count, k);
                }
            }
        }

        cout << total << endl;
    }
    return 0;
}