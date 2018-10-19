#include <bits/stdc++.h>
#define sm 1000000
#define ll long long
using namespace std;

ll exp(ll n, ll x){
	if(x==1) return n;
	else if(x==0) return 1;
	else if(x%2==0) return ((exp(n%sm,x/2))%sm*(exp(n%sm,x/2))%sm)%sm;
	return ((exp(n%sm,x/2))%sm*(exp(n%sm,x/2))%sm * n%sm)%sm;
}

int main(){
	ll x, y;
	cin >> x >> y;
	cout << exp(x%sm, y) << endl;
}	
