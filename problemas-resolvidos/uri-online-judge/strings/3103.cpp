#include <iostream>
#include <string> 
#include <algorithm>

using namespace std;  

int main(void) {

    int n;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        sort(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                swap(s[i], s[0]);
                break;
            }
        }
        cout << s << endl;
    }
    return 0;
}