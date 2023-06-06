#include <iostream>
using namespace std;
int main()
{

    int arr[1] = {2};// when you initialise its the size of the array
    int num[] = { 10, 20, 30, 40};
    cout<<num[1]<<endl;
    cout << endl<<"The array that you wanted to print is" << arr[0] << endl; 
    // when you access it's the index inside square brackets
    for(int i=0;i<5;i++){
       cout<<num[i]<<" ";
    }
     
    return 0;
}