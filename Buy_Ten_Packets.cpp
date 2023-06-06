#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;
    if(5*x>(2*y+x)){
        cout<<(2*y+x)<<endl;
        return;
    }
    cout<<5*x<<endl;
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