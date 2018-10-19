#include <bits/stdc++.h>
#define ll long long
#define sm7 1000000007
using namespace std;

template <typename T>
T modpow(T base, T exp, T modulus) {
    base %= modulus;
    T result = 1;
    while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}

uint64_t mulmod(uint64_t a, uint64_t b, uint64_t m) {
    int64_t res = 0;
    while (a != 0) {
        if (a & 1) res = (res + b) % m;
        a >>= 1;
        b = (b << 1) % m;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll arr[100100];
    arr[1] = 1;
    arr[2] = 3;

    for(int i = 3; i <= 100000; i++){
        arr[i] = (mulmod(i, i, sm7) * arr[i-1] - (mulmod(arr[i-2], mulmod(i, mulmod(i-1, i-1, sm7), sm7), sm7)/2)%sm7)%sm7;
    }

    ll T, N;
    cin >> T;

    while(T--){
        cin >> N;
        cout << arr[N] << endl;
    }


}
