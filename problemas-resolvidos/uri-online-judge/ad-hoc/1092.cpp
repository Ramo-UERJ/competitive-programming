#include <iostream>
#include <algorithm>

using namespace std;

#define MAXN 610

int matrix[MAXN][MAXN], indexMat[MAXN][MAXN], max_col[MAXN], dp[MAXN], res, N, M;

int main(void)
{
    cin >> N >> M;
    while (N || M)
    {
        for (int i = 1; i <= M; i++)
            max_col[i] = 1;
        for (int i = 1; i <= N; i++)
        {
            cin >> matrix[i][1];
            indexMat[i][1] = 1;
            for (int j = 2; j <= M; j++)
            {
                cin >> matrix[i][j];
                if (matrix[i][j] > matrix[i][j - 1])
                {
                    indexMat[i][j] = indexMat[i][j - 1];
                    max_col[j] = max(max_col[j], j - indexMat[i][j] + 1);
                }
                else
                {
                    indexMat[i][j] = j;
                }
            }
        }
        res = 0;
        for (int col_i = 1; col_i <= M; col_i++)
        {
            for (int col_l = M; col_l >= col_i; col_l--)
            {
                int size = col_l - col_i + 1;
                if (size > max_col[col_l])
                    continue;
                if (size * M <= res)
                    continue;
                if (indexMat[1][col_l] <= col_i)
                {
                    dp[1] = 1;
                }
                else
                {
                    dp[1] = 0;
                }
                res = max(dp[1] * size, res);
                for (int row = 2; row <= N; row++)
                {
                    if (matrix[row][col_i] > matrix[row - 1][col_l])
                    {
                        dp[row] = dp[row - 1];
                    }
                    else
                    {
                        dp[row] = 0;
                    }
                    if (indexMat[row][col_l] <= col_i)
                    {
                        dp[row]++;
                    }
                    else
                    {
                        dp[row] = 0;
                    }
                    res = max(dp[row] * size, res);
                }
            }
        }
        cout << res << endl;
        cin >> N >> M;
    }
    return 0;
}