#include <bits/stdc++.h>
#define si pair<string, int>
using namespace std;

int main(){
    map <string, int> mp;
    string input, token;
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++){
        cin >> ws;
        getline(cin, input);
        token = input.substr(input.find(" - ")+3, input.length());
        mp.insert(si(token, i));
    }
    while(k--){
        getline(cin, input);
        cout << mp[input] << endl;
    }
}
