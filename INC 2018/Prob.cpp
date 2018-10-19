#include <bits/stdc++.h>
#define ll long long
#define sm7 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int arr[100100], n, pre[100100];

    cin >> n;
    int count = 0;
    int ubah = 0;

    memset(pre, 0, sizeof(pre));

    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(i == 0){
            pre[i] = arr[i];
        }
        else{
            pre[i] = arr[i] - arr[i-1];
        }
    }

    for(int i = 0; i < n-1; i++){

        if(count < 3 && pre[i] > 1){
            ubah++;
            arr[i] = arr[i-1];
            pre[i] = 0;
            pre[i+1] = arr[i+1] - arr[i];
            count = 1;

        }
        else if(pre[i] > 1){
            count++;
        }
        cout << arr[i] << " ";
    }

}
