#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void) {
    
    unordered_map<string, string> patternMap;
    unordered_map<char, int> q;

    string bacteria = "A";
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        string k, v;
        cin >> k >> v;
        patternMap[k] = v;
    }

    while (n--) {
        string tmp = "";
        for (int i = 0; i < bacteria.size(); i++) {
            char c = bacteria[i];
            string pattern = "";
            while(c == bacteria[i] && i < bacteria.size()) {
                pattern += c;
                i++;
            }
            if (!patternMap[pattern].empty()) {
                tmp += patternMap[pattern];
            } else {
                tmp += pattern;
            }
            i--;
        }
        bacteria = tmp;
    }

    for (int i  = 0; i < bacteria.size(); i++) {
        q[bacteria[i]]++;
    }

    cout << q['A'] << " " << q['B'] << endl;

    return 0;
}