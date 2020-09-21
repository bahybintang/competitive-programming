#include <bits/stdc++.h>
using namespace std;

string g[70];
bool visit[70][50];
int p, l, posxC, posyC;
bool canMeetD = false, canEscape = false;

void color(int x, int y)
{
    if (x >= 0 && x < l && y >= 0 && y < p)
    {
        if ((g[y][x] != 'D' && g[y][x] != 'C' && g[y][x] != ' ') || visit[y][x])
            return;

        if ((x == 0 || x == l - 1) && g[y][x] == ' ')
            canEscape = true;

        if ((y == 0 || y == p - 1) && g[y][x] == ' ')
            canEscape = true;

        if (g[y][x] == 'D')
            canMeetD = true;

        if (canMeetD && canEscape)
            return;

        visit[y][x] = true;

        color(x - 1, y);
        color(x, y - 1);
        color(x + 1, y);
        color(x, y + 1);
        return;
    }
    else
        return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> p >> l;
    cin.ignore();
    for (int i = 0; i < p; i++)
    {
        getline(cin, g[i]);
        for (int j = 0; j < l; j++)
        {
            if (g[i][j] == 'C')
            {
                posyC = i;
                posxC = j;
            }
        }
    }

    color(posxC, posyC);

    if (canMeetD)
        cout << "Dawala bertemu Cepot" << endl;
    else
        cout << "Dawala tidak bertemu Cepot" << endl;

    if (canEscape)
        cout << "ada jalan Cepot lumpat" << endl;
    else
        cout << "tidak ada jalan Cepot lumpat" << endl;

    return 0;
}