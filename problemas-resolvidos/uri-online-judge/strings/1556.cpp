#include <iostream>
#include <map>
using namespace std;

map<string, int> uList;

void removingChar(string& str, int n, int index = -1, string curr = "") {
    if (index == n)  
        return; 
   
    if (!uList[curr]) {
        uList[curr]++;
    } else {
        return;
    }

    for (int i = index + 1; i < n; i++) {
        curr += str[i]; 
        removingChar(str, n, i, curr); 
        curr = curr.erase(curr.size() - 1);  
    }
    
    return; 
}

int main (void) {
    string s;
    while (cin >> s) {
        removingChar(s, s.size());
        uList.erase(uList.begin());
        for (auto& p : uList) {
            cout << p.first << endl;
        }
        cout << endl;
        uList.clear();
    }
    return 0;
}