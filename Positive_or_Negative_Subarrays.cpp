#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,minus_count=0,plus_count=0;
    cin>>n;
    int  v[n];
    int a[n];
    int b[n];    
    int sum=0;
    for (int i = 0; i < n; i++)
    {   
        cin>>v[i];
        
        a[i]=v[i]*pow(2,i);
        sum =sum+a[i];
        b[i]=sum;
        if(b[i]<0)minus_count++;
        else plus_count++;
    }
    // cout<<plus_count<<endl;
    // cout<<minus_count<<endl;
    int c[n];
    for (int i = 0; i < n; i++)
    {
        c[i]=b[i];
    }
    
    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            c[j]-=b[i];
            if(c[j]<0){minus_count++;}
            else{plus_count++;}
        }
        
    }
    
    cout<<abs(plus_count-minus_count)<<endl;
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--){
    solve();
   }
    return 0;
}