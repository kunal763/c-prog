#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n,inv=0,inv_sub=1;
    bool check=false;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                inv++;
            }
            
        }
        
    }
    int a=(pow(2,n)-1);
    if(inv==0)cout<<a%998244353<<endl;
    else{
        for (int i = 0; i <n-2; i++)
        { if(arr[i]>arr[i+1]){
            for (int j = i+1; j <n-1; j++)
            {   if(arr[j]>arr[i]){
                for (int k = j+1; k < n; k++)
                {
                    if(arr[k]>arr[j])check=true;
                    else check=false;
                }
                if(check==true)inv_sub++;
                
            }}
            
        }}
        cout<<inv_sub%998244353<<endl;
        
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