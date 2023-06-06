#include <bits/stdc++.h>
#define int long long
#define endl "\n"
 
using namespace std;
void solve(){
    int len,count=0;
    string str;
    cin>>len>>str;
    for (int i = 0; i <= len-2; i++){
     for (int j = i+1; j < i+2; j++){
            if (str[i]==str[j]) count+=1;
        }
    }
    cout<<count;
    
}
signed main(){
 solve();

    return 0;
}