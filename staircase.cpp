#include <iostream>
using namespace std;
int staircase(int n){
	
	return 0;
}

int main(){
	int n;
	cin>>n;
	char space=' ';
	
	for (int i = 0; i < n+1; ++i){
		cout<<space*(n-i);
		for (int j = 0; j < i; ++j){
		
		cout<<'#';
		}
		cout<<"\n";
	}
	return 0;
}