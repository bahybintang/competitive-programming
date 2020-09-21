#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, val;
    int mod[2];
    cin >> t;
    while (t--) {
    	memset(mod, 0, sizeof(mod));
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> val;
            mod[val % 2]++;
        }
        if (mod[1] == 0) cout << "NO\n";
        else if (mod[1] % 2 == 0 && mod[0] == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}