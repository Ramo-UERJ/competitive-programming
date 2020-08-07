#include <iostream>

using namespace std;


int main(){


    int n; //maior numero que o pc consegue representar
    int p, q; //numeros para a operacao
    int resultado;
    char operacao; // '+' ou '*'


    cin >> n;
    cin >> p >> operacao >> q;

    if (operacao == '+'){
        resultado = p+q;
    }else{
        resultado = p*q;
    } 

    if (resultado > n){
        cout << "OVERFLOW" << endl;
    }else{
        cout << "OK" << endl;
    }
}

