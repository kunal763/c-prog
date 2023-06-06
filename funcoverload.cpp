#include<iostream>
using namespace std;
const float pi=3.14;

float area(float n,float b,float h)
{
    float ar;
    ar=n*b*h;
    return ar;
}

float area(float r)
{
    float ar;
    ar=pi*r*r; 
    return ar;
}

float area(float l,float b)
{
    float ar;
    ar=l*b;
    return ar;
}

int main()
{
    float b,h,r,l;
    float show;
 
    show=area(0.5,4,5);
    cout<<"The area of the Triangle is "<<show<<endl;
    show=area(12);
    cout<<"The area of the Circle is "<<show<<endl;
    show=area(7,9);
    cout<<"The area of the Rectangle is "<<show<<endl;
    
    return 0;
}