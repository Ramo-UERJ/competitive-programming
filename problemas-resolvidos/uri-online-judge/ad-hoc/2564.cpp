#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (void)
{
	int n;
    while(cin >> n) {

        vector<pair<int, bool>> values(n - 1);
        for (int i = 0; i < n - 1; i++) {
            bool condition;
            cin >> values[i].first >> values[i].second;
        }
        
        vector<pair<int, bool>> aux(values);
        sort(aux.begin(), aux.end());
        
        int bestValue = aux[aux.size() - 1].first;
        int changes = 0;
        bool ignoreChanges = false;
    
        for (auto& v : values) {
            if (ignoreChanges) 
                if (v.second)   changes++;

            if (v.first == bestValue) {
                if (!v.second)  changes++;
                ignoreChanges = true;
            }
        }
        cout << changes << endl;
    }

	return 0;
}