
#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
    int soma = 0;
    while (n > 0) {
        soma += v[n - 1];
        n--;
    }

    return soma;
}


int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}