#include <iostream>
using namespace std;
int main(){
    int randc,sumdiagh=0,sumdiag=0;
    int sqarray[randc][randc];
    cin>>randc;
    for(int i=0;i<randc;i++){
        for (int j=0; j<randc; j++) {
            cin>>sqarray[i][j];
            
        }
    }
    for(int i=0;i<randc;i++){
    	int s=i;
        for (int j=0; j<randc; j++) {
            cin>>sqarray[i][j];
        
        	if (s==j) {
                sumdiagh+=sqarray[i][j];
            }
            if ((j+s)==randc-1){
                sumdiag+=sqarray[i][j];
        }   }
    }
    if (sumdiagh>sumdiag) {
        cout<<sumdiagh-sumdiag;
    }
    else{
        cout<<sumdiag-sumdiagh;
    }
    return 0;
}
