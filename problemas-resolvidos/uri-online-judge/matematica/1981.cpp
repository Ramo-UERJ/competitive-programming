#include <iostream>
#include <string>
#include <unordered_map>

#define MOD 100000007
#define MAXN 10010

using namespace std;

typedef long long ll;

unordered_map<char, ll> charMap;

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
        return 1;
}

int main(void) {

    string s;
    fat[0] = 1;
    fat[1] = 1;

    for (int i = 2; i < MAXN; i++) {
        fat[i] = ((i % MOD) * (fat[i - 1] % MOD)) % MOD;
    }

    while (true) {
        cin >> s;
        if (s == "0")   break;

        for (ll i = 0; i < s.size(); i++) {
            charMap[s[i]] = (charMap[s[i]] % MOD + 1 % MOD) % MOD;
        }

        ll div = 1;

        for (auto& x : charMap) {
            div = ((div % MOD) * (fat[x.second] % MOD)) % MOD;
        }

        charMap.clear();
        
        cout << modDivide(fat[s.size()], div, MOD) << endl; 
    }
    return 0;
}