#include<iostream>
#include<cmath>
using namespace std;
float radian(float angle)
{
    float pi=3.147895;
    float rad = angle * (pi/180);
    return rad;

}
void height(float distance ,float degree)
{
cout<<"The height of the tree is: " <<distance * tan(degree);
}

int main(){
    float distance;
   
    cout<<"Enter the distance from the base of the tree in feet: ";
    cin>>distance;
    float angle;
    cout<<"Enter the angle of elevation in degrees: ";
    cin>>angle;
    float degree = radian(angle);
    height(distance , degree);
    return 0;
    
}