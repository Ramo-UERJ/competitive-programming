#include <bits/stdc++.h>
 
using namespace std;
 
int g, n;
 
typedef vector<int> vi;
typedef vector<vi> vvi;
 
vi solvre(vvi &posicoes, vi &sistema){
    vi pontos(n, 0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            pontos[i] += sistema[j]*posicoes[i][j];
        }
    }
    int maxi = 0;
    for(int i = 0; i < n; i++){
        maxi = max(maxi, pontos[i]);
    }
    vi ans;
    for(int i = 0; i < n; i++){
        if(pontos[i] == maxi) ans.push_back(i);
    }
    return ans;
}
 
int main(){
    while(cin >> g >> n, n){
        vvi posicoes(n, vi(n,0));
        for(int i = 0; i < g; i++){
            for(int j = 0; j < n; j++){
                int aux;
                scanf("%d", &aux);
                aux--; // indexar em 0
                posicoes[j][aux]++;
            }
        }
        int k;
        cin >> k;
        for(int i = 0; i < k; i++){
            vi sistema;
            int m;
            scanf("%d", &m);
            sistema.resize(n, 0);
            for(int j = 0; j < m; j++){
                int aux;
                scanf("%d", &aux);
                sistema[j] = aux;
            }
            vi ans = solvre(posicoes, sistema);
            for(int j : ans){
                printf("%d ", j+1);
            }
            printf("\n");
        }
    }
    return 0;
}