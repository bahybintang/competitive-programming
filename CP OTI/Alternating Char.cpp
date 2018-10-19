#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cnt;
	string s;
	cin >> n;
	while(n--){
		cnt = 0;
		cin >> s;
		unsigned int i = 1;
		while(!s.empty() && s.length() != 1 && i < s.length()){
			while(s[i] == s[i-1] && s.length() != 1){
				s.erase(i, 1);
				//cout << s << endl;
				cnt++;
			}
			i++;
		}
		cout << cnt << endl;
	}
}
