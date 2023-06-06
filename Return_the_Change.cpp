#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int cost;
    cin>>cost;
    if (cost%10==0)
    {
        cout<<100-cost<<endl;
    }
    else if((cost%10)<5){
        for (int i = 1; i < 5; i++)
        {
            if((cost-i)%10==0){
                cost-=i;
            }

        }
        cout<<100-cost<<endl;
        
    }
    else if(cost%10>=5){
        for (int i = 1; i <= 5; i++)
        {
            if((cost+i)%10==0){
                cost+=i;
            }
        }
        cout<<100-cost<<endl;
        
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