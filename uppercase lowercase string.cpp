#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
  //TO LOWERCAASE THE STRING
  string f;
  cin>>f;  
  for(int i=0; i<f.size(); i++)
  {
   if(f[i]>='A'&&f[i]<='Z')
      f[i]=f[i]-'A'+97;
  }
  cout<<f<<endl;
  //To Uppercase the string
  for(int i=0; i<f.size(); i++)
  {
   if(f[i]>='a'&&f[i]<='z')
      f[i]=f[i]-'a'+65;
  }
  cout<<f<<endl;
  }
signed main(){
  int t=1;
  // cin >> t;
  while (t--){
    solve();
   }
    return 0;
}