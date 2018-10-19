#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;

ll exp(int x, int n){
    if(n < 0){
        if(x==1) return 1;
        else return 0;
    }
    else if(n == 1) return x;
    else if(n == 0) return 1;
    else if(n%2 == 0) return exp(x, n/2) * exp(x, n/2);
    return exp(x, n/2) * exp(x, n/2) * x;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    ll a, b, x;
    cin >> n;
    while(n--){
        cin >> a >> b >> x;
        ll pow = exp(a, b);
        if(x > pow){
			if(pow < x-pow) cout << "0\n";
			else cout << x << endl;
		}
        else{
            ll z = pow/x*x;
            ll y = pow/x*x +x;
            if(pow-z < y-pow) cout << z << endl;
            else cout << y << endl;
        }
    }
    return 0;
}
