#include <bits/stdc++.h>
#define ll long long
#define endl "\n" 
using namespace std;
struct learn
{
  int x;
  int y;
};

void solve(){
    // vector<int> v(5);
    // cout<<"without inputing anything : ";
    // for (auto num : v)
    // {
    //     cout<<num<<" ";
    // }
    // cout<<endl;
    // int k;
    // cin>>k;
    // v.resize(k);
    // for (auto &num : v)// for inputting the values in vector without using size
    // {
    //     cin>>num;
    // }
    // for (auto num : v)
    // {
    //     cout<<num<<" ";
    // }
    // cout<<endl;
    int arr[5]={9,6,7,9,8};
    // for (int i = 0; i <5; i++)
    // {
    //     cout<<arr[4-i]<<" ";
    // }
    //instead of this :
    // we can just maintain two pointers and then decrement the second and increment the first
    // 
    
    int n=5;
    learn brr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>brr[i].x>>brr[i].y;
    }
    
    for (int i = 0; i < n; i++)
    {
      cout<<"("<<brr[i].x<<","<<brr[i].y<<")";
      cout<<endl;
    }
    
    pair<int,int> p;
    
}
signed main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t=1;
//   cin >> t;
  while (t--){
    solve();
   }
    return 0;
}