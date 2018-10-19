#include <bits/stdc++.h>
#include <time.h>
using namespace std;

int main(){
    int arr[5] = {0};
    for(int i = 0; i<999999; i++){
        int a = rand()%5;
        arr[a]++;
    }
    for(int i = 0; i<5; i++){
        cout << "Rand Param " << i << ": " << arr[i] << endl;
    }
}
