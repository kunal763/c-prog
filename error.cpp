#include <iostream>
using namespace std;
int main(){
    int rowsandcolumns,sumdiag1=0,sumdiag2=0;
    int sqarray[rowsandcolumns][rowsandcolumns];
    cin>>rowsandcolumns;
    for(int i=0;i<rowsandcolumns;i++){
        for (int j=0; j<rowsandcolumns; j++) {
            cin>>sqarray[i][j];
            if (i==j) {
                sumdiag1+=sqarray[i][j];
            }
            if (j+i==rowsandcolumns-1){
                sumdiag2+=sqarray[i][j];
            }
        }
        
    }
    if (sumdiag1>sumdiag2) {
        cout<<sumdiag1-sumdiag2;
    }
    else if (sumdiag2>sumdiag1) {
    
    }{
        cout<<sumdiag2-sumdiag1;
    }
    return 0;
}
