#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[10];
    cin >> a;
    if(a[8] == 'P'){
        a[0] = a[0] + 1;
        a[1] = a[1] + 2;
    }
    for(int i=0; i<8; i++) cout << a[i];
}
