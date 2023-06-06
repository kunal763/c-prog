#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if (n%2==0)
    {
        if(n/2<=m)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
    
    if((n+1)/2<=m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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