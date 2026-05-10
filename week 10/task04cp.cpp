#include <iostream>
#include <cmath>

using namespace std;

// Function to convert degrees to radians
double convertToRadians(double degrees) {
    return degrees / 57.2958;
}

// Function to calculate the height of the tree
double calculateHeight(double distance, double angleRadians) {
    return distance * tan(angleRadians);
}

int main() {
    double distance, angleDegrees;

    // 1. Get measurements from the user
    cout << "Enter the horizontal distance to the tree (in feet): ";
    cin >> distance;

    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angleDegrees;

    // 2. Call function to convert the angle
    double angleRadians = convertToRadians(angleDegrees);

    // 3. Call function to calculate the height
    double height = calculateHeight(distance, angleRadians);

    // 4. Display the result
    cout << "The estimated height of the tree is: " << height << " feet." << endl;

    return 0;
}





// #include<iostream>
// #include<cmath>
// using namespace std;
// float radian(float angle)
// {
//     float pi=3.147895;
//     float rad = angle * (pi/180);
//     return rad;

// }
// void height(float distance ,float degree)
// {
// cout<<"The height of the tree is: " <<distance * tan(degree);
// }

// int main(){
//     float distance;
   
//     cout<<"Enter the distance from the base of the tree in feet: ";
//     cin>>distance;
//     float angle;
//     cout<<"Enter the angle of elevation in degrees: ";
//     cin>>angle;
//     float degree = radian(angle);
//     height(distance , degree);
//     return 0;
    
// }