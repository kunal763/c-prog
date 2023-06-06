#include <iostream>
using namespace std;
int aVeryBigSum(){
    int i;
    long sum=0;
    cin>>i;
    long arr[i];
    for (int j=0;j<i;j++){
        cin>>arr[j];
        sum=sum+arr[j];
    }
    cout<<sum;
    
    return 0;
}
int main(){
    aVeryBigSum();
    return 0;
}