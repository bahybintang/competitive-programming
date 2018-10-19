#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;

bool isPrime(ll y){
    if(y==2) return true;
    if(y==1 || y==1) return false;
    for(int i = 2; i<=sqrt(y); i++){
        if(y%i == 0) return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, cnt;
    ll x;
    cin >> n;
    while(n--){
        cnt = 0;
        cin >> x;
        ll batas = x;
        for(int i=1; i<=batas; i++){
            if(x%i == 0){
                batas = x/i;
                if(isPrime(i)) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
