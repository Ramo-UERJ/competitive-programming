#include <iostream>

using namespace std;

int main(){
    
    int n; // numero de questoes 
    string g, r; //  gabarito/ resposta
    int nota = 0;

    cin >> n;
    cin >> g;
    cin >> r;

    for (int i=0; i < n; i++ ){
        if (r[i] == 'A' && g[i] == 'A'){
            nota++;
        }
        else if (r[i] == 'B' && g[i] == 'B'){
            nota++;
        }
        else if (r[i] == 'C' && g[i] == 'C'){
            nota++;
        }
        else if (r[i] == 'D' && g[i] == 'D'){
            nota++;
        }
        else if (r[i] == 'E' && g[i] == 'E'){
            nota++;
        }
        else{
            nota = nota;
        }

    }
    cout << nota << endl;
}