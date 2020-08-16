#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;
 
const ll MOD = 1e9 + 7;

bool isPrime(ll n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    if (n % 2 == 0 || n % 3 == 0) return false; 
  
    for (ll i = 5; i <= sqrt(n); i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
           return false; 
  
    return true; 
}

int main(void) {

    ll n;
    cin >> n;
    while(n--) {
        ll a;
        cin >> a;
        cout << (isPrime(a) ? "Prime" : "Not Prime") << endl;
    }
    return 0;
}