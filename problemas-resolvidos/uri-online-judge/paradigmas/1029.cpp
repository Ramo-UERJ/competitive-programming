#include <iostream>
#include <cstring>

#define MAXN 40

using namespace std;

typedef long long ll;

ll dp[MAXN];

void init() {
    memset(dp, -1, MAXN * sizeof(ll));
    dp[0] = 0;
    dp[1] = 1;
}

ll fib(int n) {
        
    if (dp[n] != -1) {
        return dp[n];
    }
    
    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    
    return dp[n];
}

int main() {

    init();
    int n;
    cin >> n;
    
    while (n--) {
        ll a;
        cin >> a;
        ll calls = 2 * (fib(a + 1) - 1);
        ll f = fib(a);
        printf("fib(%lld) = %lld calls = %lld\n", a, calls, f);
    }

    return 0; 
}