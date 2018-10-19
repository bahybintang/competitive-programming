#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll arr[10010];
	for(int i = 1; i<=10000; i++){
		ll sm = 1, x = i;
		arr[i] = 0;
		do{
			arr[i] += x%2*sm*9;
			sm *= 10;
			x /= 2;
		}while(x != 0);
		//cout << arr[i] << endl;
	}
	int n;
	ll angka;
	cin >> n;
	while(n--){
		cin >> angka;
		int j = 1;
		while(arr[j] % angka != 0) j++;
		cout << arr[j] << endl;
	}
}
