#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    long long int arr[51];
    int N = 50;
    clock_t t1, t2;
    t1 = clock();
    //cin >> N;
    if(N%2 == 1){
        printf("0\n");
    }
    else{
        for(int i = 0; i<51; i++) arr[i] = 0;
        arr[0] = arr[2] = 1;
        for(int i = 4; i <= N; i+=2){
            int j = i-2;
            for(int x = 0; x <= j; x+=2){
                arr[i] += arr[j-x]*arr[x];
            }
        }
        //cout << arr[N] << endl;
        printf("%lld\n", arr[N]);
    }

    t2 = clock();
    //cout << (float)t2-float(t1) << endl;
    printf("%f\n", (float)t2-float(t1));
}
