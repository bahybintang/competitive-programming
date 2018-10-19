#include <bits/stdc++.h>
using namespace std;

int value(int n){
    int div = 100000;
    int sum = 0;
    while(div > 0){
        sum += n/div;
        n%=div;
        div/=10;
    }
    return sum;
}

int main(){
    int n;
    int arr[100], val, mx = -1;
    for(int i = 0; i<100; i++) arr[i] = 999;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
			val = value(i);
            if(arr[val] > i) arr[val] = i;
            mx = max(mx, val);
            /*val = value(n/i);
            if(arr[val] > n/i) arr[val] = n/i;
            mx = max(mx, val);
            n/=i;*/
        }
    }
    cout << arr[mx] << endl;
    return 0;
}
