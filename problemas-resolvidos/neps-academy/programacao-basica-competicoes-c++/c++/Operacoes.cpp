

#include <iostream>

using namespace std;


int main(){

    char letra;
    double x, y, resultado;

    cin >> letra;
    cin >> x >> y;

    if (letra == 'D'){
        resultado = x/y;
    }else{
        resultado = x*y;
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << resultado << endl;

}