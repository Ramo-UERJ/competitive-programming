#include <iostream>
#include <queue>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>

// DIFICIL PRA CARALEO!!!

#define MAXN 400000

using namespace std;

typedef long long ll;

ll countDigit(string n) {
    return n.size(); 
}

int main(){
    ll r[MAXN];
    // priority_queue <ll, vector<ll>, greater<ll>> f; 
    queue<string> f;
    unordered_map<ll, int> digMap; // mapa para armazenar os digitos dos itens da fila
    ll n, m;

    cin >> n >> m;

    memset(r, 0, sizeof(r));

    f.push(to_string(n));
    r[n % m]  = n;

    if (n % m == 0) {
        cout << r[0] << endl;
        return 0;
    }

    ll d = countDigit(to_string(n));

    digMap[d]++;

    while(!f.empty()) {
        string su = f.front();
        ll u = stoll(su);
        f.pop();

        d = countDigit(su);

        digMap[d] -= 1;

        if (digMap[d] == 0 && r[0]) { //condicao de saida (se eu percorri todo um determinado tamanh e se tenho um multiplo de m)
            break;
        }

        string sv = su + "0";
        ll v = u * 10; //zero no final
        if (v < r[v % m] || r[v % m] == 0) { // insere na fila apenas um possivel candidato.
            f.push(sv);
            r[v % m] = v;
            digMap[d + 1]++;
        }

        string aux = sv;
        for(ll i = 1; i <= 9; i++) { //contabiliza os demais
            v = u * 10 + i;
            aux[aux.size() - 1] = '0' + i;
            if (v < r[v % m] || r[v % m] == 0) {
                f.push(aux);
                r[v % m] = v;
                digMap[d + 1] += 1;
            }
        }

        v = u; //zero no inicio
        sv = su;
        if (v <= r[v % m] || r[v % m] == 0) {
            f.push("0" + sv);
            r[v % m] = v;
            digMap[d + 1]++;
        }

        aux = "0" + sv;
        for(ll i = 1; i <= 9; i++) {
            aux[0] = '0' + i;
            v = stoll(aux);
            if (v < r[v % m] || r[v % m] == 0) {
                f.push(aux);
                r[v % m] = v;
                digMap[d + 1]++;
            }
        }

    }

    cout << r[0] << endl;
    
}