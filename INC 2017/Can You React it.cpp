#include <bits/stdc++.h>
using namespace std;

char a[100][100];

int reach(int x, int y){
    if(a[x][y] == 'A') return 1;
    else if(a[x][y] == 'O'){
        reach(x+1, y);
        reach(x, y+1);
        reach(x, y-1);
        reach(x-1, y);
    }
}

int main(){
    int n, x, y;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'B'){
                x=i;
                y=j;
            }
        }
    }
    if(reach(x+1,y) || reach(x-1,y) || reach(x,y+1) || reach(x,y-1)) cout << "You can reach it!";
    else cout << "You cant! :(";
}
