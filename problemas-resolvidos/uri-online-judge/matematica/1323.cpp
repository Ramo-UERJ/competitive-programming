#include <iostream>
#include <cstdio>

using namespace std;

int main( void)
{
    int ans, n, t;
    while(true) {
        cin >> n;
        if (!n) break;
        ans = (n * (n + 1)) * (2 * n + 1);
        t = ans / 6;
        cout << (int) ans / 6 << endl;
    }
    
    return 0;
}
