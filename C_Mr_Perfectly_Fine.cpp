#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;
void solve(){
    int n;
    cin>>n;
    map<int,string> mp;
    for (int i = 0; i < n; i++)
    {
        int g;
        string s;
        cin>>g>>s;
        if(s=="00"){
            continue;
        }
        else{
            mp.insert({g,s});
        }

    }
    int c=0,k=0,m=0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if(itr->second=="10"){
            if(c>itr->first){
                c=itr->first;
                
            }
            // c=itr->first;
        }
        else if(itr->second=="01"){
            if(k>itr->first){
                k=itr->first;
            }
            // k=itr->first;
        }
        else{
            if(m>itr->first){
                m=itr->first;
            }
            // m=itr->first;
        }
        
    }
    if(c+k>=m){
        cout<<m<<endl;
    }
    else{
        cout<<c+k<<endl;
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
// #include <bits/stdc++.h>
// #define ll long long
// #define endl "\n" 
// using namespace std;
// int counter=0;
// void name(string str,int num){
// 	if (counter>num)
// 	{
// 		return;
// 	}
// 	cout<<str<<counter<<endl;
// 	counter++;
// 	name(str,num);
// }
// void solve(){
// 	int N;
// 	string s;
// 	cin>>s>>N;
//     name(s,N);
// }
// signed main(){
//   ios::sync_with_stdio(0);
//   cin.tie(nullptr);
//   cout.tie(nullptr);
//   int t=1;
//   cin >> t;
//   while (t--){
//     solve();
//    }
//     return 0;
// }