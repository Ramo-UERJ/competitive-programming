#include <iostream>

using namespace std;
#define MAXN 11

int main (void) {
    long m[MAXN][MAXN];
    int n;
    long soma = 0, tempSoma = 0;
    cin >> n;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> m[row][col];
        }
    }
    //diagonal principal
    for (int i = 0; i < n; i++) {
        soma += m[i][i];
    }

    //diagonal invertida
    for (int i = 0; i < n; i++) {
        tempSoma += m[i][n - i -1];
    }
    if (tempSoma != soma) {
        cout << -1 << endl;
        return 0;
    }

    // linhas
    for (int row = 0; row < n; row++) {
        tempSoma = 0;
        for (int col = 0; col < n; col++) {
            tempSoma += m[row][col];
        }
        if (tempSoma != soma) {
            cout << -1 << endl;
            return 0;
        }
    }

    for (int row = 0; row < n; row++) {
        tempSoma = 0;
        for (int col = 0; col < n; col++) {
            tempSoma += m[col][row];
        }
        if (tempSoma != soma) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << soma << endl;
    return 0;
}