#include <bits/stdc++.h>
using namespace std;
int a[2001];
int main(){
	int n, x, y, in1, in2, i=1;
	bool maho;
	cin >> n;
	while(n--){
		memset(a, -1, sizeof a);
		maho = false;
		cin >> x >> y;
		for(int i=0; i<y; i++){
			cin >> in1 >> in2;
			if(a[in1] == -1 && a[in2] == -1){
				a[in1] = 1;
				a[in2] = 0;
			}
			else if(a[in1] == -1 && a[in2] != -1){
				a[in1] = !a[in2];
			}
			else if(a[in2] == -1 && a[in1] != -1){
				a[in2] = !a[in1];
			}
			else if(a[in1] == a[in2]) maho = true;
		}
		cout << "Scenario #" << i << ":\n";
		if(maho) cout << "Suspicious bugs found!\n";
		else cout << "No suspicious bugs found!\n";
		i++;
	}
}	
