#include<bits/stdc++.h>
using namespace std;

	vector<char> tmp;
	vector<pair<char,int> > v;
	int n,q;

bool cek(string s,int i,bool *flag){
    if(i == s.length())return true;
    else{
        int l = lower_bound(tmp.begin(),tmp.end(),s[i]) - tmp.begin();
        int r = upper_bound(tmp.begin(),tmp.end(),s[i]) - tmp.begin();

        if(v[l].first != s[i]) return false;

        bool ans = false;
        for(int j = l; j < r; j++){
            bool tes = false;
            if(!flag[v[j].second]){
                flag[v[j].second] = true;
                tes = cek(s,i+1,flag);
                flag[v[j].second] = false;
            }
            ans = ans|tes;
            if(ans) break;
        }
        return ans;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

	cin >> n >> q;
    string s;
	getline(cin,s);
	for(int j = 0; j < n; j++){
		getline(cin,s);
		for(int i = 0; i < s.length(); i++){
			if((i == 0 || s[i-1] == ' ') && s[i] >= 'A' && s[i] <= 'Z'){
				v.push_back(make_pair(s[i],j));
			}
		}
	}
    sort(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        tmp.push_back(v[i].first);
    }

	while(q--){
        string s;
        cin >> s;
        if(s.length() > n){
            cout << "NO" << endl;
            continue;
        }
        bool flag[n+10];
        memset(flag,0,sizeof flag);
        bool ans = cek(s,0,flag);
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;


	}
}
