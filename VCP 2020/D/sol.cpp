#include <bits/stdc++.h>
#define p 1000000007
using namespace std;

long long int power(long long int x, unsigned long long int y)
{
    long long int res = 1;
    long long int z;
    x = x % p;
    if (x == 0)
        return 0;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % p;

        y = y >> 1;
        z = x * x;
        x = z % p;
    }
    return res;
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long int n;
    cin >> n;
    if (n > 1)
    {
        long long int a = power(2, 2 * n - 1);
        long long int b = power(2, n - 1);
        long long int d = a + b;
        if (d >= p)
        {
            d -= p;
        }
        if (d == 2 * p)
        {
            d = 0;
        }
        cout << d << "\n";
    }
    else if (n == 1)
        cout << 3 << "\n";
    else if (n == 0)
        cout << "1"
             << "\n";
    return 0;
}