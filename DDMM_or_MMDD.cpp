#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string s;
    cin>>s;
    int dd=stoll(s.substr(0,2));
    int mm=stoll(s.substr(3,5));
    if (dd>12) cout<<"DD/MM/YYYY"<<endl;
    else if(dd<=12 &&mm>12) cout<<"MM/DD/YYYY"<<endl;
    else cout<<"BOTH"<<endl;
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