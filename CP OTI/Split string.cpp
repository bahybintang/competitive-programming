#include <bits/stdc++.h>
using namespace std;

// MASIH GAGAL

int main(){
    vector <string> vec;
    string word, delimit = "-", input;
    int n;
    for(int i=0; i<n; i++){
        cin >> ws;
        getline(cin, input);
        stringstream ss(input);
        if(getline(ss, word, delimit)) vec.push_back(word);
    }
    for(int i=0; i<n; i++) cout << vec[i] << " ";
}
