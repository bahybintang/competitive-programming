#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, mex;
    cin >> n;
    int a[n];
    bool flag[n];
    for(int i=0; i<n; i++){
        for(int i = 0; i<n; i++) flag[i]=0;
        if(i<2) a[i] = 0;
        else{
            for(int j=1; j<=i/2; j++){
                flag[ a[i-j] ] = 1;
            }
        }
        mex = 0;
        while(flag[mex]==1)mex++;
        a[i]=mex;
    }
    for(int i=0; i<n; i++){
        //if(i%2==0 || a[i]==0) continue;
        cout << i <<  " " << a[i] << endl;
    }
}
