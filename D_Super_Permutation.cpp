#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==1) cout<<1<<endl;
    else if(n%2!=0) {cout<<-1<<endl;
    }
    else{
        for (int i = n; i>=1 ; i--)
        { if(i%2!=0)
            cout<<i<<" ";
          else{
            cout<<i<<" ";
          }
        }
       cout<<endl; 
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