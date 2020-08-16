#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}

int main (void) {
    while (true) {
        ll n, a, b;
        cin >> n >> a >> b;

        if (n == 0 && a == 0 && b == 0)   break;

        ll hcf = a * b / gcd(a, b);
        ll count = n / a + n / b - n / hcf;

        cout << count << endl;
    }
}