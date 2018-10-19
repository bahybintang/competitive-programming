#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a[1001], max = -1, min;
	int n, cntmax = 0, cntmin = 0;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a[i];
		if(i==0){
			min = a[i];
			max = a[i];
		}
		if(a[i] >  max){
			max = a[i];
			cntmax++;
		}
		if(a[i] <  min){
			min = a[i];
			cntmin++;
		}
	}
	cout << cntmax << " " << cntmin << endl;
}
