#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,s,r;
    cin>>n>>s>>r;
    int rem=(r)%(n-1);
    int quo=(r)/(n-1);
    vector<int> v(n-1,quo);
    if(rem!=0){
        for (int i = 0; i <= rem-1; i++)
        {
            v[i]+=1;
        }
      
       for (int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        for (int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
    }
    cout<<s-r<<endl;
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