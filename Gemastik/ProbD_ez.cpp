#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    srand(time(NULL));
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N, K;
    cin >> N >> K;

    bool udah[10100];

    while(K--){
        memset(udah, false, sizeof(udah));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == j){
                    cout << N*N - N + i + 1 << " ";
                }
                else{
                    int random;

                    do{
                        random = rand()%(N*N - N) + 1;
                    }while(udah[random]);

                    udah[random] = true;

                    cout << random << " ";

                }
            }
            cout << endl;
        }
    }
}
