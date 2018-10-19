#include <bits/stdc++.h>
#define ii pair<int,int>
#define iii pair< ii ,  int >
#define inf 1e18
#define MOD 1e9+7
#define fi first
#define se second
#define ll long long
#define fast ios_base::sync_with_stdio(0)
#define sort(a) sort(a.begin(),a.end())
#define it map<int,int>::iterator

using namespace std;

int main()
{
    string s;
    string::iterator it1, it2;
    int x, flag;
    vector<char>simpan;
    cin >> x;
    for(int i=0; i<x; i++){
        flag = 1;
        cin >> s;
        it1 = s.begin();
        it2 = s.end()-1;
        while((*it1 == '(' && *it2-*it1 == 1) || *it2-*it1 == 2){
            *it1++;
            *it2--;
        }
        if(it1-1 != it2) flag = 0;
       /* if(flag){
            for(string::iterator it3 = s.begin(); it3 != it2; it3++){
                if(*it3 == ')' || *it3 == '}' || *it3 == ']'){
                    flag = 0;
                    break;
                }
            }
        }*/
        for(int j=0; j<s.length(); j++){
            if(s[j]=='(');
        }

        if(flag) cout << "YES";
        else cout << "NO";
    }
}
