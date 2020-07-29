#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

typedef pair<int, string> HeightPerName;

struct PrisionerComp { 
    constexpr bool operator()( 
        HeightPerName const& a, 
        HeightPerName const& b) 
        const noexcept {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first > b.first;
    } 
}; 

int main() {
    int n, h;
    string name;
    priority_queue<HeightPerName, vector<HeightPerName>, PrisionerComp> prisioners;
    cin >> n;
    
    while(n--) {
        cin >> name >> h;
        prisioners.push(make_pair(h, name));
    }
    
    int lastHeight = prisioners.top().first;
    string line = "";
    int maxPos = 0, minPos = 1;
    
    while(!prisioners.empty()) {
        if (prisioners.top().first == lastHeight) {
            if (!line.empty()) {
                line += " ";
            }
            line += prisioners.top().second;
            maxPos += 1;
            prisioners.pop();
        } else {
            line += " " + to_string(minPos) + " " + to_string(maxPos);
            cout << line << endl;
            lastHeight = prisioners.top().first;
            line = "";
            minPos = maxPos + 1;
        }
    }

    if (!line.empty()) {
        line += " " + to_string(minPos) + " " + to_string(maxPos);
        cout << line << endl;
    }
    
    return 0;
}