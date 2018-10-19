#include <bits/stdc++.h>
#define lld long double
using namespace std;

int main(){
	lld l, s1, s2, n;
	int q;
	cin >> l >> s1 >> s2 >> q;
	lld diff = abs((s1-s2)/sqrt(2));
	while(q--){
		cin >> n;
		lld t = (l-sqrt(n))/diff;
		cout << fixed << setprecision(12) << t << endl;
	}
}
