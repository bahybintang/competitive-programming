#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll kodok(ll x){
    if(x == 1 || x == 2) return x;
    return kodok(x-1) + kodok(x-2);
}

int main(){
    ll x;
    cin >> x;
    cout << kodok(x);
}
