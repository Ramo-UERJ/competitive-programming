#include <iostream>

#define MAXN 100100

using namespace std;

int main(void ) {
    int c, n;
    int resto[MAXN];
    int doces[MAXN];
    
    cin >> c >> n;
    
    while(c && n){
         
        for (int i = 1;i <= n;i++){
            cin >> doces[i];
            doces[i] %= c;
        }
         
        for(int i = 1; i <= c; i++) 
            resto[i] = -1;
         
        int sum = 0;
        resto[0] = 0;

        for(int i = 1; i <= c; i++){
             
            sum += doces[i];
            sum %= c;
             
            if (resto[sum] != -1) {
                cout << resto[sum] + 1;
                for(int j = resto[sum] + 2; j <= i; j++) 
                    cout << " " << j;
                cout << endl;
                break;
            }
             
            resto[sum] = i;
        }
        cin >> c >> n;
    }
     
    return 0;
}