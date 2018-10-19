#include <bits/stdc++.h>
using namespace std;

int binarySearch(long long arr[], int l, int r, long long x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}

int main(){
	long long arr[100010], k;
	int n, sum = 0;
	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(int i=0; i<n-1; i++){
		if(binarySearch(arr, i+1, n, arr[i]+k) != -1) sum++;
	}
	cout << sum;
}
