#include <bits/stdc++.h>
using namespace std;

int a[100][100], b[100][100];
int n1, n2;

bool biasa(){
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n1; j++){
            if(a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

bool Horizontal(){
    for(int i = 0; i<n1; i++){
        int k = n1-1;
        for(int j = 0; j<n1; j++){
            if(a[i][j] != b[i][k--]) return false;
        }
    }
    return true;
}

bool Vertical(){
    int k = n1-1;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n1; j++){
            if(a[i][j] != b[k--][j]) return false;
        }
    }
    return true;
}

int main(){

    cin >> n1 >> n1;
    for(int i = 0; i<n1; i++){
        for(int j = 0; j<n1; j++){
            cin >> a[i][j];
        }
    }
    cin >> n2 >> n2;
    for(int i = 0; i<n2; i++){
        for(int j = 0; j<n2; j++){
            cin >> b[i][j];
        }
    }
    if(n1 != n2){
        cout << "tidak identik" << endl;
        return 0;
    }

}
