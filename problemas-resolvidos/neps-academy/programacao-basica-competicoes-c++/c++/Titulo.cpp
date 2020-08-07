
#include <iostream>

using namespace std;

//funcao que faz as alteracoes

string title(string F){ 
	for (int i = 0; i < F.size(); i++){ //percorri no tamanho de F
		if (i==0){
			if (int(F[i]) >= 65 && int(F[i]) <= 90 ){ 
				F[i] = F[i]; 
			}else{
				F[i] = int(F[i])-32;
			}
		}else{
			if (int(F[i]) >= 97 && int(F[i]) <= 122 && F[i-1] == ' '){ 
				F[i] = int(F[i])- 32; //transforma pra maiuscula
			}else{
				if (int(F[i]) >= 65 && int(F[i]) <= 90 && F[i-1] == ' '){
					F[i] = F[i]; //se for maiuscula, mantem
				}else{
					if (int(F[i]) >= 65 && int(F[i]) <= 90){
						F[i] = int(F[i])+32;
					}
				}
			}
		}
	}
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}