#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s[0]>=97 ){ cout<< char(s[0]-32); cout<<s.substr(1,s.length()-1); }
    else cout<<s;
}
signed main(){
    solve();
    return 0;
}