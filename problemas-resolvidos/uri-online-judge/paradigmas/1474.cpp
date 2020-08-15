#include <iostream>
#include <iomanip>

#define MAXN 1000000

using namespace std;

typedef long long ll;


void multMat(ll a[2][2], ll b[2][2])
{
	int i, j, k;
	ll c[2][2] = {{0}};

	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			for(k = 0; k < 2; k++)
				c[i][j] += ((a[i][k] % MAXN) * (b[k][j] % MAXN)) % MAXN;

	for(i = 0; i < 2; i++)
		for(j = 0; j < 2; j++)
			a[i][j] = c[i][j] % MAXN;
}

void powMat(ll m[2][2], ll r[2][2], ll n) {
	r[0][0] = 1;
	r[1][1] = 1;
	r[1][0] = 0;
	r[0][1] = 0;

	while(n > 0)
	{
		if(n % 2 == 0)
		{
			multMat(m, m);
			n /= 2;
		}
		else
		{
			multMat(r, m);
			n--;
		}
	}
}

int main(void) {

    ll n, k, l;

    while(cin >> n >> k >> l)
	{
    	ll aux[2][2] = {{0}};
		ll buses[2][2] = {{0,l},{1,k}};
		ll res[2][2] = {{1,k},{0,0}};

        // exponenciacao rapida de matrizes
		powMat(buses, aux, n/5);
		multMat(res, aux);

		std::cout << setfill('0') << setw(6) << res[0][0] << endl;
    }

    return 0;
}