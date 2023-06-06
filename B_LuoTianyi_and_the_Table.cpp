#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;
    int arr[n*m];
    bool check= false;
    for (int i = 0; i < n*m; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)check=true;
    }
    sort(arr,arr+(n*m));
    int diff=arr[n*m-1]-arr[0];
    if (check==false){cout<<diff*(n*m-1)<<endl; return;}
    cout<<diff*(n*m-1)-(arr[n*m-1]-arr[n*m-2])*(n/2)<<endl;

    
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