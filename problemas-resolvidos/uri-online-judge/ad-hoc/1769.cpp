#include <iostream>
#include <string>

using namespace std;

int toInt(char c) {
    return (int )(c - '0');
}

int main (void) {

    string cpf;
    while(cin >> cpf) {
        string s = "";
        for (char c : cpf) {
            if (c == '.' || c == '-')   continue;
            s += c;
        }
        int b1 = 0, b2 = 0;
        for (int i = 0; i < 9; i++) {
            b1 += toInt(s[i]) * (i + 1);
            b2 += toInt(s[i]) * (9 - i);
        }

        b1 %= 11;
        b2 %= 11;
        if (b1 == 10)   b1 = 0;
        if (b2 == 10)   b2 = 0;
        
        if (b1 == toInt(s[9]) && b2 == toInt(s[10]))
            cout << "CPF valido" << endl;
        else
            cout << "CPF invalido" << endl;
    }
    return 0;
}