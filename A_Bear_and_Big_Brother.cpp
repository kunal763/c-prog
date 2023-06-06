#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
#define INT_MAX 2147483647
using namespace std;
void solve(){
    int lim,bob;
    cin>>lim>>bob;
    for (int i = 1; i < INT_MAX; i++)
    {
        if(lim*3>bob*2){
            cout<<i;
            break;
        }
        else{
            lim=lim*3;
            bob=bob*2;
        }
    }
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
//   int t=1;
//   cin >> t;
//   while (t--){
    solve();
//    }
    return 0;
}