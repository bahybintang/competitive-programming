#include <bits/stdc++.h>

using namespace std;

long long superDigit(string n, int k) {
    // Complete this function
    long long sum = 0;
    for(unsigned int i = 0; i<n.length(); i++) sum += n[i]-'0';
    sum *= k;
    //cout << sum << endl;
    stringstream ss;
    ss << sum;
    if(sum/10 == 0) return sum;
    else return superDigit(ss.str(), 1);
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    long long result = superDigit(n, k);
    cout << result << endl;
    return 0;
}
