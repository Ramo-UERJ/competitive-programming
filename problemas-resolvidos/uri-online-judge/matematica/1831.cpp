#include <iostream>
#include <cstdio>

#define MAXN 4000000

using namespace std;

typedef long long ll;

ll mulInv(ll a, ll b)
{
	ll b0 = b, t, q;
	ll x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}
 
ll chineseRemainder(ll *n, ll *a, ll len)
{
	ll p, i, prod = 1, sum = 0;
 
	for (i = 0; i < len; i++) prod *= n[i];
 
	for (i = 0; i < len; i++) {
		p = prod / n[i];
		sum += a[i] * mulInv(p, n[i]) * p;
	}
 
	return sum % prod;
}

int main(void) {
    ll num[3], rem[3];
    ll i = 1;
    while(cin >> rem[0] >> num[0]
              >> rem[1] >> num[1]
              >> rem[2] >> num[2]) {
                  ll res = chineseRemainder(num, rem, sizeof(num)/sizeof(num[0]));
                  if (res == 0) {
                      res = num[0]*num[1]*num[2];
                  }
                  printf("Caso #%lld: %lld laranja(s)\n", i, res);
                  i++;
              }
    return 0;
}