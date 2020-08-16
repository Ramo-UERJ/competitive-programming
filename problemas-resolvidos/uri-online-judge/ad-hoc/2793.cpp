#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll mod= 1e9+7;
string S;
int i, O, F, resp;
 
int main(void) {

    cin >> S;
    resp = 1;
 
    for(i=0; i < S.size(); i++){
        if(S[i] == 'M')
            O++;
        else
            F++;
 
        if (O==F && i != S.size() - 1) 
            resp=  (resp * 2) % mod;
    }
 
 
    cout << resp << endl;
 
    return 0;
}
