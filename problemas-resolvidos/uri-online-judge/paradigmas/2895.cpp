#include <iostream>
#include <cmath>
#include <algorithm>

#define MAXN 2048

using namespace std;

static int dp[MAXN + 2];

bool isPowerOfTwo (int n) {  
    if(n == 0)    
        return false;
    
    return (ceil(log2(n)) == floor(log2(n))); 
}

int countBits(int number) {       
      return (int) log2(number) + 1; 
}

void init(void) {
    for (int i = 1; i <= MAXN; i++) {
        if (isPowerOfTwo(i)) {
            dp[i] = 1;
        } else {
            dp[i] = -1;
        }
    }
}

int findWeights(int n) {

    if (dp[n] != -1) {
        return dp[n];
    }
    
    int bits = countBits(n);
    int lower = 1 << bits - 1;
    int upper =  1 << bits;
    dp[n] = min(findWeights(n - lower), findWeights(upper - n)) + 1;
    
    return dp[n];
}

int main (void) {
    int t; 
    cin >> t;

    init();

    while(t--) {
        int n;
        cin >> n;
        int res = findWeights(n);
        cout << res << endl;
    }
}