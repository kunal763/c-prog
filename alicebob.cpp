#include <iostream>
using namespace std;
int compareTriplets(){
    int alice[3],bob[3];
    int alicescore=0,bobscore=0;
    for(int i=0;i<3;i++){
        cin>>alice[i];
    }
    for (int i=0;i<3;i++){
        cin>>bob[i];
    }
    for (int i=0;i<3;i++){
        if (alice[i]>bob[i]){
            alicescore+=1;
        
        }
        else if (bob[i]>alice[i]) {
            bobscore+=1;
        }
    }

    cout<<alicescore<<" "<<bobscore;
    return 0;
    
}

int main(){
    compareTriplets();
    
    return 0;
    }