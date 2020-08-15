#include <iostream>

using namespace std;

int main (void) {

    int a, b, c;
    while(cin >> a >> b >> c) {
        if (a != b && a != c && b == c) cout << "A" << endl;
        if (b != a && b != c && a == c) cout << "B" << endl;
        if (c != a && c != b && a == b) cout << "C" << endl;
        if (a == b && b == c && a == c) cout << "*" << endl;
    }
    return 0;
}