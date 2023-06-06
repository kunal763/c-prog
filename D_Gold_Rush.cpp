#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void imp(int n,int m){
    int q=n/3;
    int r=q;
    int s=q*2;
    if (m>r)
    {  imp(s,m);
    }
    else if (m<r)
    {
        imp(r,m);
    }
    else if (m==r||m==s)
    {
        cout<<"YES"<endl;
        
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}
void solve(){
    int n,m;
    cin>>n>>m;
    if (m>n)
    {
        cout<<"NO"<<endl;
    }
    else if (n==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        imp(n,m);
        
    }
    
    
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