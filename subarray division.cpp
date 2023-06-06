#include <bits/stdc++.h>
using namespace std;
int main()
{ 
  int n;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
      cin>>arr[i];
  }
  int day,month,sum=0,count=0,bozo=0;
  cin>>day>>month;
  for (int i=0;i<n;i++){
      int x=i; 
    for (int j=0;j<month;j++){  
        sum+=arr[x];
        x=x+1;
    }
    if(sum==day){
          count+=1;
    } 
    sum=0;
}
    cout<<count;
    return 0;
}
