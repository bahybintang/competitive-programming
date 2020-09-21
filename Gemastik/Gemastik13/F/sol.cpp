#include <bits/stdc++.h>
#define MOD 1000000007LL
#define ll long long
using namespace std;

template <typename T>
T mul_inv(T a, T b)
{
    T b0 = b, t, q;
    T x0 = 0, x1 = 1;
    if (b == 1)
        return 1;
    while (a > 1)
    {
        q = a / b;
        t = b, b = a % b, a = t;
        t = x0, x0 = x1 - q * x0, x1 = t;
    }
    if (x1 < 0)
        x1 += b0;
    return x1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N, a, m = 0;
    cin >> N;
    while (cin >> a)
    {
        N -= a;
        m++;
    }

    if (N < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        // (N + m - 1)! / N!
        ll fact[N + m];
        fact[0] = 1;
        for (int i = 1; i < N + m; i++)
        {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        ll n = N + m - 1;
        ll r = N;

        ll ans = (fact[n] * mul_inv(fact[n - r], MOD)) % MOD;
        ans = (ans * mul_inv(fact[r], MOD)) % MOD;

        cout << ans << endl;
    }
    return 0;
}