#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,count=1,max_count=1;
    cin>>n;
    vector<int> v(n);
    for (auto &num : v)
    {
        cin>>num;
    }
    sort(v.begin(),v.end());
    // for (auto num : v)
    // {
    //     cout<<num<<" ";
    // }
    // cout<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==v[i+1]) {count++; max_count=max(max_count,count);}
       else{
        count=1;
       }
        
    }
    
    cout<<n-max_count;
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