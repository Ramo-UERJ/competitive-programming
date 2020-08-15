#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
 
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);      
} 

int main (void) {
    ll t, a, b;

    while (cin >> t >> a >> b) {
        
        if (t == 0 && a == 0 && b == 0) break;
        ll mmc = (a * b) / gcd(a, b);
        ll factor = t / mmc;
        for (ll i = factor; i < t; i += factor) {
            if((mmc * i) / gcd(mmc, i) == t) {
                cout << i << " ";
            }
        }
        cout << t << endl;
    }

}