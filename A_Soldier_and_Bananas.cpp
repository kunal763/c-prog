#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int k,n,w,tot=0;
    cin>>k>>n>>w;
    for (int i = 1; i <= w; i++)
    {
        tot=tot+k*i;
    }
    cout<<tot-n;

}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
//   int t;
//   cin >> t;
//   while (t--){
    solve();
//    }
    return 0;
}