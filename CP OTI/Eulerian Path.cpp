#include <bits/stdc++.h>
using namespace std;

int main(){
    int v, e, v1, v2, w, totw = 0;
    cin >> v >> e;
    vector<int> degree(v+1);
    while(e != totw){
        cin >> v1 >> v2 >> w;
        degree[v1]+=w;
        degree[v2]+=w;
        totw += w;
    }
    vector<int> ganjil;
    for(int i = 1; i<=v; i++){
        if(degree[i] % 2 == 1){
            ganjil.push_back(i);
        }
    }
    sort(ganjil.begin(), ganjil.end());
    if(ganjil.size() == 0 || ganjil.size() == 2) cout << -1 << endl;
    else{
        for(int i = 0; i<ganjil.size()-2; i++){
            cout << ganjil[i] << endl;
        }
    }
}
