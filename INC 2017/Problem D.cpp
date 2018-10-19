#include <bits/stdc++.h>
#define ll long long
#define sm7 1000000007
using namespace std;

ll N, M, K;
ll prev_a = 0, prev_b, a, b, gap, ans = 1;

ll exp(ll n, ll pangkat) {
	if(pangkat == 0) return 1;
	if(pangkat == 1) return n;
	if(pangkat%2 == 1) return (n*exp(n, pangkat-1))%sm7;

	ll temp = exp(n, pangkat/2)%sm7;
	return (temp*temp)%sm7;
}

ll expinv(ll n) {
	return exp(n, sm7-2);
}

ll beda(ll k) {
	ll temp = exp(N-1, k+1);

	if(k%2 == 0) return ((temp + 1)*expinv(N))%sm7;
	return ((temp - 1)*expinv(N))%sm7;
}

ll sama(ll k) {
	return ((N-1)*beda(k-1))%sm7;
}

int main(){
	cin >> N >> M >> K;

	while(K--) {
		cin >> a >> b;
		gap = a-prev_a-1;

		if(ans != 0) {
			if(prev_a == 0) ans = (ans*exp(N-1, a-1))%sm7;
			else if(gap == 0) {
				if(b == prev_b) ans = 0;
			}
			else if(b == prev_b) ans = (ans*sama(gap))%sm7;
			else ans = (ans*beda(gap))%sm7;
		}

		prev_a = a;
		prev_b = b;
	}

	if(prev_a != M and ans != 0) ans = (ans*exp(N-1, M-a))%sm7;
	cout << ans << endl;
}
