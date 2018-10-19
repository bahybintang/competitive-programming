#include <bits/stdc++.h>
using namespace std;
#define si pair<string, int>

int main(){
    int n, q, l, r, cnt;
    map <string, int> arr;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        arr.insert(si(s, i));
    }
    //cin >> q;
    for(map<string, int>::iterator it = arr.begin(); it!=arr.end(); it++){
        cout << it->first << "   " << it->second << endl;
    }
}
