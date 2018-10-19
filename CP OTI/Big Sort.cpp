#include <bits/stdc++.h>
using namespace std;

struct x{
	int i, j;
}bts[100010];

void quickSort(string *arr, int left, int right) {
      int i = left, j = right;
      string tmp;
      unsigned int pivot = arr[(left + right) / 2].length();
 
      /* partition */
      while (i <= j) {
            while (arr[i].length() < pivot)
                  i++;
            while (arr[j].length() > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}


int main(){
	string vec[100010];
	int n, k=0, q;
	cin >> n;
	for(int i=0; i<n; i++)  cin >> vec[i];
	quickSort(vec, 0, n-1);
	for(int i=0; i<n; i++) cout << vec[i] << " ";
	cout << endl;
	q = 0;
	for(int i=1; i<n; i++){
		if(vec[i].length() != vec[i-1].length()){
			bts[k].i = q;
			bts[k].j = i-1;
			q = i;
			k++;
		}
		else if(i == n-1){
			bts[k].i = q;
			bts[k].j = i;
			k++;
		}
	}
	for(int i=0; i<k; i++){
		//quickSort1(vec, bts[i].i, bts[i].j);
		sort(vec+bts[i].i, vec+bts[i].j+1);
	}
	for(int i=0; i<n; i++) cout << vec[i] << "\n";
}	
