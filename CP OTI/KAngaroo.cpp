#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int lcm(int a, int b){
	return a*b/(gcd(a, b));
}

int main(){
	int x[2], v[2];
	bool flag = true;
	cin >> x[0] >> v[0] >> x[1] >> v[1];
	if(x[0] > x[1] && v[0] > v[1]) cout << "NO\n";
	else if(x[1] > x[0] && v[1] > v[0]) cout << "NO\n";
	else{
		int i = x[0] > x[1] ? 1 : 0;
		while(x[0] != x[1]){
			x[0] += v[0];
			x[1] += v[1];
			if(x[i] > x[(i+1)%2]){
				flag = 0;
				break;
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
}
