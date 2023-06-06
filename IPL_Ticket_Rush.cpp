#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,N,M;
	cin>>t;
	while(t--){
	    cin>>N>>M;
        if (N>=M)
        {
            cout<<N-M<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        
	}
	return 0;
}
