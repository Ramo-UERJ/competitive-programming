#include <iostream>

#define MOD 1000000007

using namespace std;

typedef unsigned long long ull;

void multiply(ull a[3][3], ull b[3][3]) 
{ 
    ull mul[3][3]; 
    for (ull i = 0; i < 3; i++) 
    { 
        for (ull j = 0; j < 3; j++) 
        { 
            mul[i][j] = 0; 
            for (ull k = 0; k < 3; k++) {
                mul[i][j] += a[i][k]*b[k][j] % MOD;
                mul[i][j] %= MOD;
            }
        } 
    } 
  
    for (ull i = 0; i < 3; i++) 
        for (ull j = 0; j < 3; j++) 
            a[i][j] = mul[i][j] % MOD;  
} 
  
ull power(ull F[3][3], ull n) 
{ 
    ull M[3][3] = {{0,1,1}, {1,0,0}, {0,1,0}}; 
  
    if (n == 1) 
        return F[0][0] % MOD + F[0][1] % MOD;
  
    power(F, n / 2); 
  
    multiply(F, F); 
  
    if (n % 2 != 0) 
        multiply(F, M); 
  
    return F[0][0] + F[0][1];
} 

ull computSubset(ull n) { 
  
    ull F[3][3] = {{0,1,1}, {1,0,0}, {0,1,0}} ; 
  
    if(n == 1) 
        return 1;

    if(n == 3 || n == 2) 
        return 2; 
  
    return power(F, n); 
} 

int main(void) {

    ull n;
    while(cin >> n) {
        cout << computSubset(n) % MOD << endl;
    }
    return 0;
}