#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	unsigned int i = 0;
	while(!s.empty() && i < s.length()){
		while(s[i] == s[i+1]){
			s.erase(i, 2);
			i = 0;
		}
		i++;
	}
	if(s.empty()) cout << "Empty String\n";
	else cout << s << endl;
}
