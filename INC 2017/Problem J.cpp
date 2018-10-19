#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0, max=0;
    string a;
    string::iterator it;
    getline(cin, a);
    for(it=a.begin(); it!=a.end()+1; it++){
        if(*it=='a') count++;
        else if(*it!='a' || it==a.end()){
            if(count >= max){
                max = count;
                count = 0;
            }
        }
        else count = 0;
    }
    while(max--) cout << 'a';
    cout << 'a';
}
