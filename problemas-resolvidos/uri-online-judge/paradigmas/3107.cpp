#include <bits/stdc++.h>

#define MAGIC_NUMBER 30 //prevent TLE

using namespace std;

constexpr int INF = 1321730048;
constexpr int MAXN = 1e6 + 3;

int dp[MAXN][2];
vector<int> arr;
int x, y;

int puloDoSapo(int pos, bool isLargeJump) {
    
    if (pos == arr.size() - 1)
        return 0;

    if (~dp[pos][isLargeJump])
        return dp[pos][isLargeJump];

    dp[pos][isLargeJump] = INF; 
    auto it = upper_bound(arr.begin(), arr.end(), arr[pos] + x);

    if (it-- == arr.begin())
        dp[pos][isLargeJump] = min(dp[pos][isLargeJump], INF);
    else {
        int cnt = MAGIC_NUMBER;
        for (auto it2 = it; cnt-- && *it2 > arr[pos]; --it2) {
            if (*it2 == arr[pos]) {
                dp[pos][isLargeJump] = min(dp[pos][isLargeJump], INF);
                break;
            } else {
                dp[pos][isLargeJump] = min(dp[pos][isLargeJump], 
                    1 + puloDoSapo(it2 - arr.begin(), 0));
            }
        }
    }

    if (!isLargeJump) {
        it = upper_bound(arr.begin(), arr.end(), arr[pos] + y);
        if (it-- == arr.begin())
            dp[pos][isLargeJump] = min(dp[pos][isLargeJump], INF);
        else {
            int cnt = MAGIC_NUMBER;
            for (auto it2 = it; cnt-- && *it2 > arr[pos]; --it2) {
                if (*it2 == arr[pos]) {
                    dp[pos][isLargeJump] = min(dp[pos][isLargeJump], INF);
                    break;
                } else {
                    dp[pos][isLargeJump] = min(dp[pos][isLargeJump], 
                        1 + puloDoSapo(it2 - arr.begin(), 1));
                }
            }
        }
    }

    return dp[pos][isLargeJump];

}

int main(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    memset(dp, -1, sizeof(dp));
    arr.resize(n + 2);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }
    arr.front() = 1;
    arr.back() = m;
    cin >> x >> y;

    cout << (puloDoSapo(0, 0) == INF ? -1 : puloDoSapo(0, 0)) << "\n";

    return 0;
}