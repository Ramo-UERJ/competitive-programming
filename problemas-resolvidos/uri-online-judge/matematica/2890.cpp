#include <iostream>
#include <string>

#define MOD 1000007
#define MAXN 10010

using namespace std;

typedef long long ll;

ll fat[MAXN];

ll gcdExtended(ll a, ll b, ll *x, ll *y) 
{ 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1); 

    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
}

ll modInverse(ll b, ll m) 
{ 
    ll x, y;
    ll g = gcdExtended(b, m, &x, &y); 
  
    if (g != 1) 
        return -1; 
  
    return (x%m + m) % m; 
} 
  
ll modDivide(ll a, ll b, ll m) 
{ 
    a = a % m; 
    ll inv = modInverse(b, m); 
    if (inv != -1) 
        return (inv * a) % m;
    else 
        return -1;
}

ll pow2(ll a) {
    ll i, result = 1;
    for (i = 0; i < 2; ++i)
        result = (result * a) % MOD;

    return result;

}

ll pow4(ll a) {
    ll i, result = 1;
    for (i = 0; i < 4; ++i)
        result = (result * a) % MOD;

    return result;
}

// total = C(N, 1) + C(N, 2) + C(N, 3) + C(N, 4)
// total = N!/(N - 1)! + N!/(N - 2)! + N!/(N - 3)! + N!(N - 4)!
// total = 11N^2 + N^4 / 12

int main(void) {
    ll a;
    while(true) {
        cin >> a;
        if (!a) break;

        ll res = (11 * pow2(a) + pow4(a)) % MOD;
        cout << modDivide(res, 12, MOD) << endl;
        
    }
    return 0;
}