#include <bits/stdc++.h>
#define int long long
#define endl "\n" 
using namespace std;

// void solve(){
//     int x;
//     cin>>x;
//     int a=pow(x,0.5);
//     if(x==1)cout<<-1<<endl;
//     else if(x-a*a!=0)cout<<a<<" "<<a<<" "<<x-a*a<<endl;
//     else cout<<a-1<<" "<<a-1<<" "<<x-(a-1)*(a-1)<<endl;
// }

void solve(){
    int x;
    cin>>x;

    if(x==1){
        cout<<-1<<endl;
        return;
    }

    int a,b,c = 1;
    if(x<=100000000){

        x--;
        int temp = sqrtl(x);

        a = temp;
        b = temp;

        c += (x - temp*temp);
    }
    else{
        x--;
        a = 1000000;
        b = x/a;

        int temp = x - (a*b);

        c+=temp;
    }

    cout<<a<<' '<<b<<' '<<c<<endl;

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