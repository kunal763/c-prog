

#include <bits/stdc++.h>
#define ll long long
#define endl "\n" 
using namespace std;
signed modInverse(ll A, ll M)
{
	for (ll X = 1; X < M; X++)
		if (((A % M) * (X % M)) % M == 1)
			return X;
}
signed fact(ll x){
    ll factorial=1;
     for (ll i = 1; i <=x; i++)
    {
        factorial*=i;
    }
    return factorial;
}
void solve(){
    ll x,one,two,rem=1;
    cin>>x;
    ll a=fact(x);
    ll counter=1;
    
    
    vector<pair<ll,ll>> v;
    while (x--)
    {   cin>>one>>two;
        v.push_back(make_pair(one,two));
    }
    sort(v.begin(),v.end());

    for (ll i = 0; i < v.size(); i++)
    {
        if(v[i].first==v[i+1].first){
            counter++;
        }
        else{
            rem=rem*fact(counter);
            counter=1;
        }
    }
    cout<<modInverse(a/rem,(ll)100000007);
    
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
//   ll t;
//   cin >> t;
//   while (t--){
    solve();
//    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// long long int MOD = 1000000007;

// int main(){
//     long long int a=1,b=60;
//     // cin>>a>>b;

//     long long int temp = a*b + MOD;
//     long long int ans =  temp % MOD;

//     cout<<ans<<endl;
//     return 0;
// }