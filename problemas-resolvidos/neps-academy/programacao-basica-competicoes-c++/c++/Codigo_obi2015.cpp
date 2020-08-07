
#include <iostream>

using namespace std;

int main(){

    int N;
    int contadora = 0;
    int valor = 0;

    cin >> N;
    int vetor[N];
    
    
    for(int i = 0; i < N; i++){

        cin >> valor;
        vetor[i] = valor;
    }

    for (int i = 0; i < N; i++){
        if (i < N-2){
            if (vetor[i] == 1 && vetor[i+1] == 0 && vetor[i+2] == 0){
                contadora++ ;
            }
        }

    }
    cout << contadora << endl;
}