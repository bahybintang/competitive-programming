#include <bits/stdc++.h>
using namespace std;

string solve()
{
    int n, m;
    cin >> n >> m;
    long long arr[n][m];
    long long maks[n][m];
    string paths[n][m];

    memset(maks, 0, sizeof(maks));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == n - 1 && j == 0)
            {
                maks[i][j] = arr[i][j];
                paths[i][j] = "";
            }
            else if (i == n - 1)
            {
                maks[i][j] = maks[i][j - 1] + arr[i][j];
                paths[i][j] = paths[i][j - 1] + "R";
            }
            else if (j == 0)
            {
                maks[i][j] = maks[i + 1][j] + arr[i][j];
                paths[i][j] = paths[i + 1][j] + "F";
            }
            else
            {
                if (maks[i + 1][j] > maks[i][j - 1])
                {
                    maks[i][j] = maks[i + 1][j] + arr[i][j];
                    paths[i][j] = paths[i + 1][j] + "F";
                }
                else
                {
                    maks[i][j] = maks[i][j - 1] + arr[i][j];
                    paths[i][j] = paths[i][j - 1] + "R";
                }
            }
        }
    }
    
    return paths[0][m - 1];
}

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << solve() << endl;
    return 0;
}
