

#include <iostream>

using namespace std;


int fib(int N){
    if (N==0 or N==1){
        return 1;
    }
    return fib(N-1)+fib(N-2);

}

int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
}