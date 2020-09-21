#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000037LL
using namespace std;

template <typename T>
T power(T x, T y, T p)
{
    T res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<ll> v;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    ll ans = 1;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans = power(v[i], ans, MOD);
    }
    cout << ans << endl;
    return 0;
}