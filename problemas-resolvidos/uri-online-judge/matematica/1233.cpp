#include <iostream>
#include <cmath>

using namespace std;

typedef long long ll;
 
const ll MOD = 1e9 + 7;

// totient de euler
int phi(int n) 
{ 
    int result = n; 
    for (int p = 2; p <= sqrt(n); ++p) { 
          
        if (n % p == 0) { 
              
            while (n % p == 0) 
                n /= p; 
            result -= result / p; 
        } 
    }
      
    if (n > 1) 
        result -= result / n; 
    return result; 
} 

int main(void) {
	int n, res;
	while (cin >> n) {
        res = phi(n) / 2;
		cout << res << endl;
	}
	return 0;
}