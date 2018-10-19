#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int n, r, c;

int main(){
    cin >> n;
    for(int i = sqrt(n); i>=1; i--){
        if(n % i == 0){
            r = i;
            c = n/r;
            break;
        }
    }
    cout << r << " " << c << endl;
}
