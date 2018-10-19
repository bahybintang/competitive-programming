#include <bits/stdc++.h>
using namespace std;

char Mirror(char a){
	if(a == 'E') return '3';
	else if(a == 'S') return '2';
	else if(a == 'Z') return '5';
	else if(a == '5') return 'Z';
	else if(a == '2') return 'S';
	else if(a == '3') return 'E';
	else if(a == 'L') return 'J';
	else if(a == 'J') return 'L';
	if(a == 'B' || a == 'C' || a == 'D' || a == 'F' || a == 'G' || a == 'K' || a == 'N' || a == 'P' || a == 'Q' || a == 'R' || a == '4' || a == '6' || a == '7' || a == '9' || a == '0') return '-';
	else if((a >= 'A' && a<='Z') || (a>='0' && a<='9'))return a;
	else return '-';
}

int main(){
	string str, st[4] = {" -- is not a palindrome.", " -- is a regular palindrome.", " -- is a mirrored string.", " -- is a mirrored palindrome."};
	string::iterator it1, it2;
	while(cin >> str){
		bool pal = true, mir = true;
		it1 = str.begin();
		it2 = str.end()-1;
		while(it2 > it1){
			if(*it1 != *it2) pal = false;
			if(*it1 != Mirror(*it2)) mir = false;
			it1++;
			it2--;
		}
		if(pal && mir) cout << str << st[3] << endl;
		else if(pal) cout << str << st[1] << endl;
		else if(mir) cout << str << st[2] << endl;
		else cout << str << st[0] << endl;
		cout << endl;
	}
}
