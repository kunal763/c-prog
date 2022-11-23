#include <iostream>
using namespace std;
int product(float a, float b){
    cout<<a*b<<endl;
    return a*b;
}
int main()
{
    cout<<"product of 2.2*3="<<product(2.2,3);
    return 0;
}