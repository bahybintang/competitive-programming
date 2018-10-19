#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, index;
    char h;
    bool flag = false;
    cin >> x;
    int freq[26];
    int freqsisa[26];

    memset(freqsisa, 0, sizeof(freqsisa));
    memset(freq, 0, sizeof(freq));

    while(x--){
        cin >> h;
        freq[h-'a']++;
    }

    string s;
    for(int i = 0; i < 26; i++){
        if(freq[i]%2 == 1 && !flag){
            flag = true;
            index = i;
        }
        else if(freq[i]%2 == 1){
            freq[i]--;
            freqsisa[i]++;
        }
    }

    while(freq[index] > 0){
        s += (char)(index + 'a');
        freq[index]--;
    }

    for(int i = 0; i < 26; i++){
        if(i != index){
            while(freq[i] > 0){
                s = (char)(i + 'a') + s + (char)(i + 'a');
                freq[i] -= 2;
            }
        }
    }

    for(int i = 0; i < 26; i++){
        if(freqsisa[i] != 0){
            s += (char)(i + 'a');
        }
    }

    cout << s << endl;

}
