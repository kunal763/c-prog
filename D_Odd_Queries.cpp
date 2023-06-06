#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;
 
signed solve(){
    int n,q;
    cin>>n>>q;
    int sum=0;
    int vec[n],sumvec[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
        sum+=vec[i];
        sumvec[i]=sum;
    }

    int temp=sum; //creating a temp variable sdo that we don't change sum after every time doing operations
    
    for (int i = 0; i < q; i++)
    {   int l,r,k;
        cin>>l>>r>>k;
        sum=sum-(sumvec[r-1]-sumvec[l-1]+vec[l-1]);
        // cout<<sum<<" ";
        sum+=(l-r+1)*k;
        if (sum%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
        sum=temp;
    }  
    return 0; 
}
 
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}