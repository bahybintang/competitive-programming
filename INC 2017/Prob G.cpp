#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, y[100010], max = -1, n;
    for(int i=0; i<100010; i++) y[i] = -1;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a;
            if(y[a] == -1) y[a] = j;
            else if(j < y[a]) y[a] = j;
            else{
                if(a >= max) max = a;
            }
        }
    }
    cout << max;
}
