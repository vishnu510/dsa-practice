#include <bits/stdc++.h>
using namespace std;

int getMissNo(long long a[],long long n){
    long long sum= n*(n+1)/2;
    for(int i=0;i<n-1;i++){
        sum-=a[i];
    }
    return sum;
}

int main() {
	// your code goes here
	long long num;
	cin>>num;
	long long arr[num];
	for(int i=0;i<num-1;i++){
	    cin>>arr[i];
	}
	int MissNo = getMissNo(arr,num);
	cout<<MissNo;
	
	return 0;
}
