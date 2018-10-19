#include <bits/stdc++.h>
using namespace std;

int main(){
	int T, a, N;
	cin >> T;
	while(T--){
		cin >> N;
		int sa=0, mx = -10001, sc = 0, scmax = -10001;
		for(int i=0; i<N; i++){
			cin >> a;
			sc += a;
			if(sc < 0) sc = 0;
			scmax = max(scmax, sc);
			if(a > 0) sa+=a;
			mx = max(a, mx);
		}
		if(sa == 0) sa = mx;
		if(scmax == 0) scmax = mx;
		cout << scmax << " " << sa << endl;
	}
}
