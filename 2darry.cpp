#include <iostream>
using namespace std;

int main(){
    int n,sumdiag1=0,sumdiag2=0;
    cin>>n;
    int arr[n][n];
    for (int i = 0; i < n; ++i){
    
    	for (int j = 0; j < n; ++j){
    		cin>>arr[i][j];
    		if (i==j)
    		{
    			sumdiag1+=arr[i][j];
    		}
    		if ((i+j)==n-1)
    		{
    			sumdiag2+=arr[i][j];
    		}
   		}
    	
    }
cout<<abs(sumdiag2-sumdiag1);
    
    return 0;
}