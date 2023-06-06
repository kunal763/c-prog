#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,t,var=0,k=0,ans=-1;
    cin>>n>>t;
    int enter[n],duration[n],realdura[n];
    for (int i = 0; i < n; i++)
    {cin>>duration[i];
    realdura[i]=duration[i]+var;
    var++;
    }
    for (int i = 0; i < n; i++)
    {
        cin>>enter[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (t>=realdura[i])
        {   if(k<enter[i]){
            k=enter[i];
            ans=i+1;
        }
        }
    }
    cout<<ans<<endl;
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int q;
  cin >> q;
  while (q--){
    solve();
   }
    return 0;
}