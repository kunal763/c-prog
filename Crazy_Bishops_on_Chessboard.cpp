#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int N;
        cin>>N;
        if (N==1)
        {
            cout<<0<<endl;
        }
        
        else if (N%2==0)
        {
            int upper=N/2;
            int lower=N/2;
            int moves=(upper-1)*1+(lower-2)*2+2;
            cout<<moves<<endl;
        }
        else
        {
                int upper=(N+1)/2;
                int lower=N/2;
                int moves=(upper-1)*1+(lower-1)*2+1;
                cout<<moves<<endl;
        }    
        
    }
    
    return 0;
}