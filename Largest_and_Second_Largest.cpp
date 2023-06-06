#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    set<int> s(arr,arr+n);
    
    auto it= s.end();
    it--;
    auto lar=*it;
    it--;
    auto sec=*it;
    cout<<lar+sec<<endl;
    
    
    
    
    
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