#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int sum=0,D=0,d=0,Q=0,s=0;
    cin>>D>>d>>s>>Q;
    long long int tot=D/d;
    while((tot)>0){
        sum+=s*d;
        s=s+Q;
        tot-=1;
        
    }
    if ((D-d*(D/d))>0)
    { 
        sum=sum+s*(D-d*(D/d));
    }
    cout<<sum;
}