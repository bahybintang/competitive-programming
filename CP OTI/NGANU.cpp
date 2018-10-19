#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[110], b[110];
	int n, m, cnt = 0;
	bool flag;
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	sort(a, a+n);
	sort(b, b+n);
	for(int i = 1; i<=b[0]; i++){
		flag = 1;
		for(int j=0; j<n; j++){
			if(i%a[j] != 0){
				flag = 0;
				break;
			}
		}
		for(int j=0; j<m && flag; j++){
			if(b[j]%i != 0){
				flag = 0;
				break;
			}
		}
		if(flag) cnt++;
	}
	cout << cnt << endl;
