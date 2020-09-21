#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll in;
    ll big[10100];
    ll small[10100];
    ll data[10100];

    ll T, N;

    cin >> T;

    while(T--){
        memset(big, 0, sizeof(big));
        memset(small, 0, sizeof(small));
        ll sum = 0;

        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> data[i];
        }

        for(int i = 0; i < N; i++){
            for(int j = i + 1; j < N; j++){
                if(data[j] < data[i]) small[i]++;
                else big[i]++;
            }
        }

        for(int i = 0; i < N; i++){
            for(int j = i+1; j < N; j++){
                if(data[j] > data[i]){
                    sum += small[j];
                }
                else{
                    sum += big[j];
                }
            }
        }

        cout << sum << endl;

    }
}
