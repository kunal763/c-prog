#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,pos=0;
    bool check=false;
    string num;
    char digit;
    cin>>n>>digit>>num;
    for (int i = 0; i < n; i++)
    {
        if(num[i]<digit){pos=i; check=true; break;}
    }
    if(check==false){
        cout<<num.substr(0,n);
        cout<<digit<<endl;
        return;
    }
    cout<<num.substr(0,pos);
    cout<<digit;
    cout<<num.substr(pos,n)<<endl;
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