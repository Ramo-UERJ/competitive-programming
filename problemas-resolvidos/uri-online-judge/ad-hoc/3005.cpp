#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool is_number(std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}

int main (void) {

    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;

    for (int k = 0; k < n; k++) {
        string s;
        int i = 0;

        a.clear();
        b.clear();

        while(i < 3) {
            cin >> s;
            if (is_number(s)) {
                a.push_back(stoi(s));
                i++;
            }
        }

        i = 0;

        while (i < 3) {
            cin >> s;
            if (is_number(s)) {
                b.push_back(stoi(s));
                i++;
            }
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int res = 0;
        
        if (b[2] > a[1] && b[1] > a[0]) res += 1;
        if (a[2] > b[1] && a[1] > b[0]) res += 2;

        cout << res << endl;
    }
    
    return 0;
}