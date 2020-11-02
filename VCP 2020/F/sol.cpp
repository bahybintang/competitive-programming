#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, ans = 0;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        long long num;
        char tanda;
        cin >> tanda >> num;
        if (tanda == '+')
        {
            x += num;
        }
        else if (tanda == '-')
        {
            if (x - num >= 0)
            {
                x -= num;
            }
            else
            {
                ans++;
            }
        }
    }
    cout << x << " " << ans << endl;
    return 0;
}