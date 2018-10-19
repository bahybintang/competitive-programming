#include <bits/stdc++.h>
using namespace std;

const int N = 51, M = 10100;
int n, q;

bool bpm(bool bpGraph[][N], int u,
         bool seen[], int matchR[])
{
    for (int v = 0; v < n; v++)
    {
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true;
            if (matchR[v] < 0 || bpm(bpGraph, matchR[v],
                                     seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}

int maxBPM(bool bpGraph[][N], int q)
{
    int matchR[N];
    memset(matchR, -1, sizeof(matchR));

    int result = 0;
    for (int u = 0; u < q; u++)
    {
        bool seen[N];
        memset(seen, 0, sizeof(seen));
        if (bpm(bpGraph, u, seen, matchR))
            result++;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    bool alfabet[51][30];
    memset(alfabet, false, sizeof(alfabet));

	cin >> n >> q;
	bool bpGraph[M][N];

    string s;
	getline(cin,s);
	for(int j = 0; j < n; j++){
		getline(cin,s);
		for(int i = 0; i < s.size(); i++){
			if((i == 0 || s[i-1] == ' ') && s[i] >= 'A' && s[i] <= 'Z'){
                alfabet[j][s[i]-'A'] = true;
			}
		}
	}

    for(int i = 0; i < q; i++){
        memset(bpGraph, 0, sizeof(bpGraph));
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            for(int k = 0; k < n; k++){
                if(alfabet[k][s[j]-'A']){
                    bpGraph[j][k] = 1;
                    //cout << "bpGraph[" << j << "][" << k << "]" << endl;
                }
            }
        }
        int result = maxBPM(bpGraph, s.size());

        //cout << result << endl;

        if(result == s.size()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}
