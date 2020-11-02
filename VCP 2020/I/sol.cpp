#include <bits/stdc++.h>
#define ll long long
#define MOD 101LL
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
    ll x;
    vector<ll> v;
    while (cin >> x)
    {
        v.push_back(x);
    }

    ll ans = v[0];
    for (long unsigned int i = 1; i < v.size(); i++)
    {
        ans = power(ans, v[i], MOD);
    }
    cout << ans << endl;
    return 0;
}