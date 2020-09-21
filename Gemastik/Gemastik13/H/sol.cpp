#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, Q;
    cin >> N >> M >> Q;
    int g[N][M], pre[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> g[i][j];
        }
    }

    memset(pre, 0, sizeof(int) * N * M);
    pre[0][0] = g[0][0];
    for (int i = 1; i < N; i++) {
        pre[i][0] = pre[i - 1][0] + g[i][0];
    }
    for (int j = 1; j < M; j++) {
        pre[0][j] = pre[0][j - 1] + g[0][j];
    }
    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            pre[i][j] = g[i][j] + pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
        }
    }

    while (Q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--; y1--; x2--; y2--;
        int ans = pre[x2][y2];
        if (x1 - 1 >= 0) {
            ans -= pre[x1 - 1][y2];
        }
        if (y1 - 1 >= 0) {
            ans -= pre[x2][y1 - 1];
        }
        if (x1 - 1 >= 0 && y1 - 1 >= 0) {
            ans += pre[x1 - 1][y1 - 1];
        }
        cout << ans << endl;
    }

    return 0;
}