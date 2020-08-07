
#include <iostream>

using namespace std;

int main(){

    int n;
    string num;
    int numero;
    cin >> n;

    int oco0= 0,oco1= 0, oco2= 0;
    int oco3= 0, oco4= 0, oco5= 0;
    int oco6= 0, oco7= 0, oco8= 0, oco9= 0;

    for (int i=0; i < n; i++){
        cin >> num;
        for (int j = 0; j < num.size(); j++){
            if (num[j] == '0'){
                oco0++;
            }else if (num[j] == '1'){
                oco1++;
            }else if (num[j] == '2'){
                oco2++;
            }else if (num[j] == '3'){
                oco3++;
            }else if (num[j] == '4'){
                oco4++;
            }else if (num[j] == '5'){
                oco5++;
            }else if (num[j] == '6'){
                oco6++;
            }else if (num[j] == '7'){
                oco7++;
            }else if (num[j] == '8'){
                oco8++;
            }else{
                oco9++;
            }
        }
    }
    cout << "0 - " << oco0 << endl;
    cout << "1 - " << oco1 << endl;
    cout << "2 - " << oco2 << endl;
    cout << "3 - " << oco3 << endl;
    cout << "4 - " << oco4 << endl;
    cout << "5 - " << oco5 << endl;
    cout << "6 - " << oco6 << endl;
    cout << "7 - " << oco7 << endl;
    cout << "8 - " << oco8 << endl;
    cout << "9 - " << oco9 << endl;

}