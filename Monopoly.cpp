#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int p,q,r,s;
    cin>>p>>q>>r>>s;
    int a=max(p,q);
    int b=max(r,s);
    int pro=max(a,b);
    if (pro>(p+q+r+s-pro))
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
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