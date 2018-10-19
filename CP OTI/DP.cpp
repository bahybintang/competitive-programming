#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> pecahan, tmp;
    vector <int> beste;
    vector < vector<int> > haha;
    int pecah, jml, angka;
    tmp.push_back(0);
    cin >> angka >> jml;

    while(jml--){
        cin >> pecah;
        pecahan.push_back(pecah);
    }

    int x = angka, bestJ;

    angka+=2;

    while(angka--){
        beste.push_back(99999999);
        haha.push_back(tmp);
    }
    beste[0] = beste[1] = 0;
    for(int i = 1; i<=x; i++){
        int best = 99999999;
        bestJ = -1;
        for(int j = 0; j<pecahan.size(); j++){
            if(i-pecahan[j] >= 0){
                //best = min(best, beste[i-pecahan[j]]);
                if(best > beste[i-pecahan[j]] ){
                    best = beste[i-pecahan[j]];
                    bestJ = j;
                }
            }
        }
        beste[i] = best+1;
        if(bestJ != -1){
            haha[i] = haha[i-pecahan[bestJ]];
            haha[i].push_back(pecahan[bestJ]);
        }
        //cout << i << " " << beste[i] << endl;
    }

    //cout << endl << beste[x] << endl;
    sort(haha[x].begin(), haha[x].end());
    for(int i = 1; i<haha[x].size(); i++){
        cout << haha[x][i] << " ";
    }

}
