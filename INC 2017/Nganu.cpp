#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main(){
    set <int> sets;
    set <int>::iterator it1, it2, it3;
    int n, y, in;
    cin >> n >> y;
    while(n--){
        cin >> in;
        sets.insert(in);
    }
    if(sets.size()<y){
        cout << "0";
        return 0;
    }
    it2=sets.end();
    for(int i=1; i<y; i++){
        it2--;
    }
    cout << *it2-*sets.begin();
}
