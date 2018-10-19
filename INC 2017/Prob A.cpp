#include <bits/stdc++.h>
using namespace std;

struct ab{
    int a, b;
    string sw;
}b;

int main(){
    int a[300][300], max=-INT_MAX, min=INT_MAX, sum=0;
    int x, y, in;
    cin >> x >> y;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin >> a[i][j];
        }
    }
    cin >> in;
    for(int i=0; i<in; i++){
        cin >> b.sw >> b.a >> b.b;
        if(b.sw=="row"){
            for(int i=0; i<y; i++) a[b.a-1][i]+=b.b;
        }
        if(b.sw=="col"){
            for(int i=0; i<x; i++) a[i][b.a-1]+=b.b;
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            sum+=a[i][j];
            if(a[i][j]>=max) max = a[i][j];
            if(a[i][j]<=min) min = a[i][j];
        }
    }
    cout << sum << " " << min << " " << max;
}
