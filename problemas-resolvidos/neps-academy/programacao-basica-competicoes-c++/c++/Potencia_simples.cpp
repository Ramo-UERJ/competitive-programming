
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double x, y;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> x >> y;

    cout << pow(x,y) << endl;
}