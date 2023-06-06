#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,balls;
    
	cin>>t;
	while (t--){
	    cin>>balls;
        long long int runs[balls]={};
        long long int sum=0;
        long long int counter=0;
        for (int i = 0; i < balls; i++)
        {
           cin>>runs[i];
        }
        for (int i = 0; i < balls; i++)
        {
            sum=sum+runs[i];
            if ((sum/(i+1))==1)
            {
               counter+=1;
            }
            
        }
        cout<<counter<<endl;
        
        
	}
	return 0;
}
