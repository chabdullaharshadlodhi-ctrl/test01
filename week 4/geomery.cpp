#include<iostream>
using namespace std;
int main(){
    float area, length, width, radius, base, height;
    string shape;
    cout<<"Enter the shape (square, rectangle, circle, triangle): ";
    cin>>shape;
    if (shape=="square"){
        cout<<"Enter the length of the square: ";
        cin>>length;
        area = length*length;
        cout<<"The area of the square is: "<<area<<endl;
    }
    else if (shape=="rectangle"){
        cout<<"Enter the width of the rectangle: ";
        cin>>width;
        cin>>length;
        area = length*width;
        cout<<"The area of the rectangle is: "<<area<<endl;
    }
    else if (shape=="circle"){
        cout<<"Enter the radius of the circle: ";
        cin>>radius;
        area = 3.14*radius*radius;
        cout<<"The area of the circle is: "<<area<<endl;
    }
    else if (shape=="triangle"){
        cout<<"Enter the base of the triangle: ";
        cin>>base;
        cout<<"Enter the height of the triangle: ";
        cin>>height;
        area = 0.5*base*height;
        cout<<"The area of the triangle is: "<<area<<endl;
    }
        return 0;
}