#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string str;
    cin>>str;
    if(str.length()>10){
        cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
        return;
    }
    cout<<str<<endl;
    
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