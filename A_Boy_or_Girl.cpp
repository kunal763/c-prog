#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string s;
    cin>>s;
    set<char> a;
    for (int i = 0; i < s.length(); i++)
    {
        a.insert(s[i]);
    }
    if(a.size()%2==0){ cout<<"CHAT WITH HER!"; return;}
    cout<<"IGNORE HIM!";
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
//   cin >> t;
  while (t--){
    solve();
   }
    return 0;
}