#include <bits/stdc++.h>
using namespace std;

long long int exp(long long int n, long long int x){
    if(x==1) return n;
    else if(x==0) return 1;
    else if(x%2==0) return exp(n, x/2)*exp(n, x/2);
    return exp(n, x/2)*exp(n, x/2)*n;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int x;
    int n;
    cin >> n;
    while(n--){
        cin >> x;
        cout << exp(x, x) << endl;
    }
    return 0;
}
