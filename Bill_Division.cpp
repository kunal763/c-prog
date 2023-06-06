#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,bcharged,sum=0;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i <n; i++){
    
        cin>>arr[i];
    }
    cin>>bcharged;
    for (int i = 0; i < n; i++)
    {
            sum=sum+arr[i];
    }
    if ((sum-arr[k])/2==bcharged)
    {
        cout<<"Bon Appetit";
    }
    else
    {
         cout<<arr[k]/2;
    }
    
    return 0;
}