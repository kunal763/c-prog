#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    string s1,s2;
    cin>>s1>>s2;
    bool a=false;
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    transform(s2.begin(),s2.end(), s2.begin(), ::tolower);
    for (int i = 0; i < s1.length(); i++)   
    {
        
        if ((s1[i]-s2[i])>0)
        {
            cout<<1;
            a=true;
            break;
        }
        else if((s1[i]-s2[i])<0) {cout<<-1; a=true; break;}
    
        
    }
    if (a==false)
    {
        cout<<0;
    }
    
    

}
signed main(){
//   int t;
//   cin >> t;
//   while (t--){
    solve();
//    }
    return 0;
}