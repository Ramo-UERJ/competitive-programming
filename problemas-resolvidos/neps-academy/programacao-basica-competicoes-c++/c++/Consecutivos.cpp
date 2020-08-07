
#include <iostream>

using namespace std;


int main(){

    int N;
    int Vn1 = 0;
    int a = 0;
    int pontuacao_a = 0;
    int guarda_pontos = 0; 
    
    cin >> N;

    for (int i = 0; i < N; i++){

        cin >> Vn1;
        if (i == 0){
            a = Vn1;
            pontuacao_a++;
        }else{
            if (Vn1 == a){
                pontuacao_a++ ;
            }else{
                a = Vn1;
                pontuacao_a = 1;
            }
            
            if(pontuacao_a > guarda_pontos){
                guarda_pontos = pontuacao_a;
            }else{
                continue;
            }
        }
    }
    cout << guarda_pontos << endl;

}