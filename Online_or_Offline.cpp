#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    if((90*n)==m*100){cout<<"EITHER";
    return;}
    else if(90*n>m*100){
        cout<<"DINING"<<endl;
        return;
    }
    else if(90*n<m*100){cout<<"ONLINE"<<endl;return;}
    
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