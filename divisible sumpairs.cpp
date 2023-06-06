#include <iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	int sum=0,count=0;
	int t=0;
	// taking the array
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	while(t<n){
		for (int k=t;k<n;k++){
			
			sum=arr[t]+arr[k+1];
			if (sum%k==0){
				count=count+1;
			}
			
			sum=0;
		}
		t++;
	}
	cout<<count;
	return 0;
}