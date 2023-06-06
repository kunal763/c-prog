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
    sort(arr,arr+n);
    for (int b = 2; i < arr[n-2]/arr[0]; b++)
    {
        for (int i = 0; i < n; i++)
        {
            int k=arr[i]*b;
            int l=arr[i]*b*b;
            if(k )
        }
        
    }
    
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