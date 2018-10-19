#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> pecahan, tmp;
    vector <int> beste;
    vector <int> haha;
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
        beste.push_back(0);
    }
    beste[0] = beste[1] = 0;
    for(int i = 1; i<=x; i++){
        int best = 99999999;
        bestJ = 0;
        for(int j = 0; j<pecahan.size(); j++){
            if(i-pecahan[j] >= 0){
                beste[i]++;
                //beste[i]+=beste[i-pecahan[j]];
                bestJ++;
                /*if(best > beste[i-pecahan[j]] ){
                    best = beste[i-pecahan[j]];
                    bestJ = j;
                }*/
            }
        }
        //beste[i] += bestJ;
        //cout << i << " " << beste[i] << endl;
    }

    cout << endl << beste[x] << endl;

}
