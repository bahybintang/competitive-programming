#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main(){
    string h;
    int x, y, type, str, ends, maks=0, maksbgt=0;
    cin >> x >> y;
    cin >> h;
    for(int i=0; i<y; i++){
        cin >> type;
        switch(type){
        case 1 :
            cin >> str >> ends;
            for(int i=str-1; i<ends-1; i++){
                if(h.at(i)=='1') h.at(i)='0';
                else h.at(i) = '1';
            }
            break;
        case 2 :
            cin >> str >> ends;
            for(int i=str; i<ends-1; i++){
                if(h.at(i)==h.at(i-1)) maks++;
                else{
                    if(maksbgt<=maks) maksbgt=maks;
                    maks=0;
                }
            }
            cout << maksbgt << endl;
            break;
        }
    }
}
