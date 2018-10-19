#include <bits/stdc++.h>
using namespace std;

bool comp(long long a, long long b){
    return a>b;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, i, j, ind[100100];
    long long k, x;
    cin >> n >> k;
    x=k;
    long long a[n];
    for(i=0; i<n; i++){
        cin >> a[i];
        ind[a[i]] = i;
    }
    for(i = 0; i<n && k>0; i++){
		if (a[i] == n - i) {
            continue;
        }
        a[ind[n - i]] = a[i];
        ind[a[i]] = ind[n - i];
        a[i] = n - i;
        ind[n - i] = i;
        k--; 
	}
    for(int i=0; i<n; i++) cout << a[i] << " ";
    return 0;
}
