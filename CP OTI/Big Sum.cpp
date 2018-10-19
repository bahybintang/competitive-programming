#include <bits/stdc++.h>
using namespace std;

int main(){
	string x, y, tmp;
	stringstream ss;
	int sum, temp = 0;
	cin >> x >> y;
	string::iterator it1 = x.end()-1, it2 = y.end()-1;
	while(it1 >= x.begin() && it2 >= y.begin()){
		sum = *it1-'0' + *it2-'0' + temp;
		temp = sum/10;
		ss << sum%10;
		it1--;
		it2--;
	}
	while(it1 >= x.begin()){
		sum = *it1-'0' + temp;
		temp = sum/10;
		ss << sum%10;
		it1--;
	}
	while(it2 >= y.begin()){
		sum = *it2-'0' + temp;
		temp = sum/10;
		ss << sum%10;
		it2--;
	}
	ss << temp;
	tmp = ss.str();
	reverse(tmp.begin(), tmp.end());
	while(tmp[0] == '0') tmp.erase(0,1);
	cout << tmp;
}
