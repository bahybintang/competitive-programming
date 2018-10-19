#include <bits/stdc++.h>
using namespace std;

int besttime = -1, n, k, arr[21];
vector <int> bestVec, tmp;

void CD(int idx, int time, vector<int> vec, bool lr){
    if(lr){
        time += arr[idx];
        vec.push_back(arr[idx]);
    }
    if(idx >= k || time > n) return;
    if(((time == besttime && vec.size() > bestVec.size()) || time > besttime)){
        bestVec = vec;
        besttime = time;
    }
    CD(idx+1, time, vec, true);
    CD(idx+1, time, vec, false);
}

int main(){
    int sum=0;
    vector<int> vec;
    while(cin >> n >> k){
	sum=0;
        for(int i=0; i<k; i++) cin >> arr[i];
        CD(0, 0, vec, true);
        CD(0, 0, vec, false);
        for(vector<int>::iterator it = bestVec.begin(); it!=bestVec.end(); it++){
                cout << *it << " ";
                sum+=*it;
        }
        cout << "sum:" << sum << endl;
        bestVec.clear();
        vec.clear();
        besttime = -1;
    }
}
