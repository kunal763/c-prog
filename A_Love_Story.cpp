#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string s,real="codeforces";
    cin>>s;
    int count=0;
    for (int i = 0; i < 10; i++)
    {
        if(s[i]!=real[i]){
            count+=1;
        }
    }
    cout<<count<<endl;
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