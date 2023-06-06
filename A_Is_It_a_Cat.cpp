#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n;
    string str;
    int mindex=0,eindex=0,oindex=0,windex=0;
    cin>>n>>str;
    bool check= true;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    for (int i = 0; i < str.length(); i++)
    {
       
        if(str[i]=='m') mindex=i;
        else if((str[i]=='e'))  eindex=i;
        else if((str[i]=='o'))  oindex=i;
        else if((str[i]=='w')) windex=i;
        else {check=false; break;}
    }
    for (int i = 0; i <= mindex; i++)
    {
        if((str[i]!='m')) {check=false;
        break;}
    }
    for (int i = mindex+1; i <=eindex; i++)
    {
        if((str[i]!='e'))  {check=false;
        break;}
    }
    for (int i = eindex+1; i <=oindex; i++)
    {
        if((str[i]!='o'))  {check=false;
        break;}
    }
    for (int i = oindex+1; i <=windex; i++)
    {
        if((str[i]!='w'))  {check=false;
        break;}
    }
    
    if(mindex<eindex&& eindex<oindex&& oindex<windex&&check==true) cout<<"YES"<<endl; 
    else cout<<"NO"<<endl;
    
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