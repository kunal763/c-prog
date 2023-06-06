#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int scores[n];
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    int max=scores[0],min=scores[0],mincount=0, maxcount=0;
    for (int j=1;j<n ; j++) {
        if (scores[j]>max) {
            maxcount+=1;
            max=scores[j];
        }
        else if (scores[j]<min) {
            mincount+=1;
            min=scores[j];
        }
    }
    cout<<maxcount<<" "<<mincount;
    
    return 0;
}

