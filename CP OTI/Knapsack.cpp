#include <bits/stdc++.h>
using namespace std;

int n, k, in1, in2, x;
vector<int> size, val;

int knapsack(){
	int K[x+1][n+1];
	for(int i = 0; i <= x; i++){
		for(int w = 0; w <= k; w++){
			if(i == 0 || w == 0) K[i][w] = 0;
			else if(size[i-1] <= w) K[i][w] = max(val[i-1] + K[i-1][w - size[i-1]], K[i-1][w]);
			else K[i][w] = K[i-1][w];
		}
	}
	return K[x][n];
}

int main(){
	cin >> n >> k;
	x = k;
	while(k--){
		cin >> in1 >> in2;
		size.push_back(in1);
		val.push_back(in2);
	}
	cout << knapsack() << endl;
}
