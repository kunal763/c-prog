#include <iostream>
using namespace std;
int integers(int &m,int &n){
  // we have called by refernce that's why it's not 
	m++;
	n++;
}
int main()
{ 
  int a,b;
  cin>>a>>b;
  cout<<a<<" "<<b<<"\n";
  integers(a,b);
  // now we have called the function and the value is passed by refernce so it is 
  // updating the main variable
  cout<<a<<" "<<b;
  

 

  



	
	return 0;
}