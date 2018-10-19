#include<iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	for(int q = 0; q < t; q++){
		int n;
		cin >> n;
		int mod = 1000000007;
		long long jawab = 0,x,index[100100],cnt[100100],hasil[n+10];
		for(int i = 0; i <= 100010; i++){
			index[i] = -1;
			cnt[i] = 0;
		}
		for(int i = 0; i < n; i++){
			cin >> x;
			if(cnt[x] == 0){
				hasil[i] = 0;
			}
			else{
				hasil[i] = hasil[index[x]]%mod + i-index[x]-1%mod;
			}
			cnt[x]++;
			index[x] = i;
			jawab = (jawab+hasil[i]) % mod;
		//	cout << hasil[i] << endl;
		}
		cout << "Case #" << q+1 << ": " << jawab << endl;
	}
}
