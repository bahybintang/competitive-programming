#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

char a[105][105];
int M, N, Q;
int x, y;
char z;

void changePixel(int q, int w, char e, char xx){
    if(a[q][w]!=xx) return;
    a[q][w]=e;
    changePixel(q, w+1, e, xx);
    if(w!=0)changePixel(q, w-1, e, xx);
    changePixel(q+1, w, e, xx);
    if(q!=0)changePixel(q-1, w, e, xx);
}

int main(){
    cin >> M >> N;
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            cin >> a[i][j];
        }
    }
    cin >> Q;
    for(int i=0; i<Q; i++){
        cin >> x >> y >> z;
        changePixel(x, y, z, a[x][y]);
    }
    for(int i=0; i<M; i++){
        cout << a[i] << endl;
    }
}
