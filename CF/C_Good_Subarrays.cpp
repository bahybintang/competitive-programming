#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    string s;
    cin >> t;
    while   (t--) {
        cin >> n >> s;
        int prefsum[n] = {0};
        prefsum[0] = int(s[0] - 'a');
        for (int i = 1; i < n; ++i) {
            prefsum[i] = prefsum[i - 1] + int(s[i] - 'a');
        }
    }
    return 0;
}