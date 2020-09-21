#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    while (N--)
    {
        int P, Q, M;
        cin >> P >> Q >> M;
        while (M)
        {
            if (P > Q)
                P /= 2;
            else
                Q /= 2;
            M--;
        }

        if (P > Q)
            cout << P << " " << Q << endl;
        else
            cout << Q << " " << P << endl;
    }
    return 0;
}