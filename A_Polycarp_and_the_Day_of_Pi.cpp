#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string pi="314159265358979323846264338327";
    string s;
    int count=0;
    cin>>s;
    for (int i = 0; i <s.length() ; i++)
    {
        if(s[i]==pi[i] ) count+=1; 
        else break;
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