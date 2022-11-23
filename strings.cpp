// #include <iostream>
// #include <string>
#include <iostream>
#include <string>
using namespace std;
int main(){
  int len;
  string kunal;
  cout<<"input a string";
  getline(cin,kunal);
  len=kunal.size();
  cout<<len<<endl;
  if (len>10){
   cout<<kunal[0];
   
  }
  
	return 0;
}