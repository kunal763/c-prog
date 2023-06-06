#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
// void solve(){
//     int n,a,pos,pos2,newindex=0;
//     cin>>n;
//     int arr[n];
    
    
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//         // arr->push_back(a);
   
//     }
//     int maxi=arr[0], mini=arr[0],mini2=arr[0],maxi2=arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>maxi) {maxi=arr[i]; pos=i;}
//         if(arr[i]<mini) {mini=arr[i]; pos2=i;}
//     }
    
//     cout<<maxi<<endl;
//     cout<<mini<<endl;
//     for(int i=0; i<n; i++)
//     {
//         if (i ==pos)  {
//          arr[pos] = arr[i+1];
         
//       }
//       if(i==pos2)arr[pos2]=arr[i+1];
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>maxi) {maxi2=arr[i]; pos=i;}
//         if(arr[i]<mini) {mini2=arr[i]; pos2=i;}
//     }
//     // cout<<maxi2<<" "<<mini2<<endl;
//     a=max(maxi*maxi2,mini*mini2);
//     // cout<<a<<endl;

    
    
// }
void solve(){
    int n,a;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    { cin>>arr[i];
        
    }
    sort(arr, arr + n);
   
    int maxi=arr[n-1];
    int maxi2=arr[n-2];
    int mini=arr[0];
    int mini2=arr[1];
    // cout<<maxi<<" "<<maxi2<<endl;
    // cout<<mini<<" "<<mini2<<endl;
    a=max(maxi*maxi2,mini*mini2);
    cout<<a<<endl;
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