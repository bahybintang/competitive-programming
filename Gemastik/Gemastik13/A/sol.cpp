#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    map<int, pair<string, int>> mp;
    cin >> N;
    while (N--)
    {
        string a, b;
        int x1, y1, r1, x2, y2, r2;
        cin >> a >> x1 >> y1 >> r1 >> b >> x2 >> y2 >> r2;
        int jarak = int(sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
        int key = jarak - r1 - r2;
        mp[key] = make_pair(a + " " + b, jarak);
    }

    for (auto x = mp.rbegin(); x != mp.rend(); x++)
    {
        cout << x->second.first << " " << x->second.second << endl;
    }

    return 0;
}