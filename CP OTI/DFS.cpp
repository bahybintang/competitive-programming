#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k, a, b;
	
	cin >> n >> k;
	
	int visit[n+1], distance[n+1];
	memset(visit, 0, sizeof visit);
	memset(distance, 0, sizeof distance);
	vector <int> AdjList[n+1];
	
	for(int i=0; i<k; i++){
		cin >> a >> b;
		AdjList[a].push_back(b);
		AdjList[b].push_back(a);
	}
	
	visit[0] = 1;
	distance[0] = 0;
	
	stack<int> dfs;
	dfs.push(0);
	
	while(!dfs.empty()){
		int i = 0;
		int u = dfs.top();
		int v = AdjList[u][i];
		while(!visit[v]){
			cout << v << " ";
			visit[v] = 1;
			distance[v] = distance[u]+1;
			if(AdjList[v].[i+1] != NULL){
				i = 0;
					
			}
			else if(AdjList[dfs.top()][i+1] != NULL);
			
			dfs.push(v);
		}
	}
}
