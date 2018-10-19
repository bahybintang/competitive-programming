#include <bits/stdc++.h>
using namespace std;

struct nodes{
	int pos;
	char x;
}node[200][200];

int n, z, x;
vector<int> bestVec, vec;

void shortestPath(int x, int y, vector<int> vec){
	if(node[x][y].x == 'o' || node[x][y].x == 'A'){
        vec.push_back(node[x][y].pos);
        node[x][y].x = '-';
	}
	else if(node[x][y].x == 'B'){
        vec.push_back(node[x][y].pos);
        if(vec.size() < bestVec.size() || bestVec.empty()) bestVec = vec;
        vec.clear();
		return;
	}
	else return;
	if(x < n-1) shortestPath(x+1, y, vec);
	if(y < n-1) shortestPath(x, y+1, vec);
	if(x > 0) shortestPath(x-1, y, vec);
	if(y > 0) shortestPath(x, y-1, vec);
	return;
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> node[i][j].x;
			node[i][j].pos = (j+1) + i*n;
			if(node[i][j].x == 'A'){
				z = i;
				x = j;
			}
		}
	}

	shortestPath(z, x, vec);

	for(unsigned int i=0; i<bestVec.size(); i++){
		cout << bestVec[i] << " ";
	}
    cout << "\n\n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << node[i][j].pos << "\t";
		}
		cout << endl;
	}
}
