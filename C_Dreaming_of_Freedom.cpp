#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if (m==1)
    {
        cout<<"YES"<<endl;
    }
    
    else if(n%2==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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