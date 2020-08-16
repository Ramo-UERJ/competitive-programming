#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long min;

    while(cin >> min) {
        long long alemanha = 0;
        long long brasil = 0;
        if (min == 0) break;

        int jogos = min / 90;
        alemanha += 7 * jogos;
        brasil += jogos;

        if (min % 90 > 0) {
            alemanha += (int) ceil((double)(min - jogos * 90) / 12.86);
        }
        
        cout << "Brasil " << brasil << " x " << "Alemanha " << alemanha << endl; 
    }
}