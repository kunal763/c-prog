#include <bits/stdc++.h>
#define ll long long
#define endl "\n" 
using namespace std;
int gcd(ll a, ll b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
int findGCD(ll array[], ll n)
{
  ll result = array[0];
  for (ll i = 1; i < n; i++)
  {
    result = gcd(array[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}
void solve(){
    ll n,diff;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {cin>>arr[i];}

    ll diffarr[n/2];
    bool check=false;
    for (ll i = 0; i <n/2; i++)
    {
        diff=abs(arr[i]-arr[n-i-1]);
        // if(diff==0)continue;
        diffarr[i]=diff;
    }
    int ans=findGCD(diffarr,n/2);
    if(n==1){cout<<0<<endl;
    return;}
    cout<<ans<<endl;
    // else if(check=true){
    //     cout<<ans<<endl;

    // }
    // else if (check==false)
    // {
    //     cout<<0<<endl;
    // }
    
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  ll t;
  cin >> t;
  while (t--){
    solve();
   }
    return 0;
}