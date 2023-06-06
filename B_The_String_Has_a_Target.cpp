#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,x=0;
    cin>>n;
    string s;
    cin>>s;
    char a=s[0];
    for (int i = 0; i < n; i++)
    {
        if(s[i]<=a){
            a=s[i];
            x=i;
        }

    }
    cout<<a;
    cout<<s.substr(0,x);
    cout<<s.substr(x+1,n)<<endl;
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