 #include <bits/stdc++.h>
using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,temp =10000,large=0;
// 	    cin>>n;
// 	    int arr[n];
// 	    for (int i = 0; i < n; i++) {
// 	        cin>>arr[i];
// 	        if(temp>abs(arr[i])) temp=arr[i];
// 	    }
//         // cout<<temp<<endl;
// 	    for (int j = 0; j < n; j++) {
// 	        if(temp==arr[j]) {
//                 if (j==0)
//                 {
//                     large=arr[j+1];
//                     break;
//                 }
//                 else
//                 {
//                  if(arr[j+1]>arr[j-1]) large=arr[j+1];
// 	             else large=arr[j-1];
//                  break;
                   
//                 }
// 	        }
// 	    }
// 	    cout<<abs(temp-large)<<endl;
// 	}
// 	return 0;
// }

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,temp =10000,large=0;
// 	    cin>>n;
// 	    int arr[n];
// 	    for (int i = 0; i < n; i++) {
// 	        cin>>arr[i];
// 	    }
//         for(int i=0;i<n-1;i++){
//             if(abs(arr[i]-arr[i+1])<temp){
//                 temp = abs(arr[i]-arr[i-1]);
//                 int a = INT_MAX;
//             }
//         }
        
//         cout<<temp<<endl;
// 	}
// 	return 0;
// }
// submitted by ___joker___

#include <bits/stdc++.h>
#define int long long
#define endl "\n" 

using namespace std;

void solve(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int> v;
    v.push_back(abs(arr[0]-arr[1]));
    v.push_back(abs(arr[n-1]-arr[n-2]));

    for(int i=1;i<n-2;i++){
        int a = abs(arr[i]-arr[i-1]);
        int b = abs(arr[i]-arr[i+1]);

        int x = max(a,b);
        v.push_back(x);
    }

    sort(v.begin(),v.end());

    cout<<v[0]<<endl;
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int test_cases = 1;
    cin>>test_cases;
    while (test_cases--){
        solve();
    }
}