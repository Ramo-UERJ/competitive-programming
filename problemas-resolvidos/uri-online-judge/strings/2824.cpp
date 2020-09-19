#include <bits/stdc++.h>

using namespace std;
static int L[5005][5005]; 
int lcs(string& x, string& y) 
{ 
    int m = x.size();
    int n = y.size();
    int i, j; 

    for (i = 0; i <= m; i++) { 
        for (j = 0; j <= n; j++) { 
            if (i == 0 || j == 0) 
                L[i][j] = 0; 
  
            else if (x[i - 1] == y[j - 1]) 
                L[i][j] = L[i - 1][j - 1] + 1; 
  
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]); 
        } 
    } 
  
    return L[m][n]; 
}

int main(void) {
    string x, y;
    cin >> x >> y;
    cout << lcs(x, y) << endl;
    return 0;
}