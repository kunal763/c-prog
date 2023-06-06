#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string s;
    cin>>s;
    bool check=true;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[0]==s[i])check =true;
        else{ check=false; break;}
    }
    if(check==false) cout<<s.length()-1<<endl;
    else cout<<-1<<endl;
    
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