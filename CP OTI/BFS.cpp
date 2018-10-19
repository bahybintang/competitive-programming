#include <bits/stdc++.h>
using namespace std;

int ans;

void bfs(vector<int> *AdjList, queue<int> bfs, int *visit){
	ans = 0;
	while(!bfs.empty()){
		int u = bfs.front();
		bfs.pop();
		
		for(int v : AdjList[u]){
			if(visit[v] == -1){
				visit[v] = (visit[u]+1)%2;
				bfs.push(v);
			}
			else if(visit[v] != visit[u]) continue;
			else{
				ans = 1;
				return;
			}
		}
		AdjList[u].clear();
	}
}

int main(){
	int n, k, a, b, x;
	
	cin >> x;
	
	for(int j = 0; j<x; j++){
		cin >> n >> k;
		int visit[n+1];
		memset(visit, -1, sizeof visit);
		vector <int> AdjList[n+1];
		for(int i=0; i<k; i++){
			cin >> a >> b;
			AdjList[a].push_back(b);
			AdjList[b].push_back(a);
		}
		for(int i=0; i<n; i++){
			queue<int> q;
			if( visit[i] == -1){
				visit[i] = 0;
				q.push(i);
				bfs(AdjList, q, visit);
			}
			if(ans) break;
		}
		cout << "Scenario #" << j+1 << ":\n";
		if(ans) cout << "Suspicious bugs found!\n";
		else cout << "No suspicious bugs found!\n";
	}
}
