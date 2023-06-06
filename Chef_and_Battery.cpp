#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if (n==50) cout<<0<< endl;
	    else if (n<50){
	     if ((50-n)%2==0) cout<<(50-n)/2<<endl;
	     else cout<<((51-n)/2) + 2<<endl;
	    }
	    else{ 
	        if ((n-50)%3==0) cout<<(n-50)/3<<endl;
	        else if ((n-50)%3==1) cout<<((n-51)/3) + 2<<endl;
	        else cout<<((n-52)/3)+4<<endl;
	    }
	    
	}
	return 0;
}