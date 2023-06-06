#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    int a=x*x*x*x+4*y*y;
    int b=4*x*x*y;
    if(a==b){cout<<"YES"<<endl;
    return;}
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