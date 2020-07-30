#include <iostream>
#include <cmath>

using namespace std;

double level(double x) {
    return floor(log(x)/log(2));
}

// https://www.geeksforgeeks.org/find-distance-between-two-nodes-of-a-binary-tree/
double distance(double a, double b) {
    double i, j;
    if(level(a) > level(b))
    {
        i = a; j =b;
        while(level(i) != level(b))
            i=floor(i/2);
            
        while(i != j)
        {
            i = floor(i/2);
            j = floor(j/2);
        }
        
        return level(a) + level(b) - 2*level(i);
    }
    else
    {
        i = b; j = a;
        while(level(i) != level(a))
            i=floor(i/2);
            
        while(i!=j)
        {
            i = floor(i/2);
            j = floor(j/2);
           
        }
        return level(a) + level(b) - 2*level(i);
    }
}

int main() {
    long  long int q;
    double a, b;
    cin >> q;
        
    for (long long int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << distance(a, b) << endl;
    }
    return 0;
}