#include<iostream>
#include<cmath>
#include<conio.h>

using namespace std;

// User-defined function prototype
void calculateRoots(double a, double b, double c);

int main()
{
    double a, b, c; // Using double for better precision in math
    cout << "Enter the coefficient of quadratic term (a): ";
    cin >> a;
    
    cout << "Enter the coefficient of linear term (b): ";
    cin >> b;

    cout << "Enter the constant term (c): ";
    cin >> c;

    // Logic Check: 'a' cannot be zero in a quadratic equation
    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0)." << endl;
    } else {
        // Calling the User-defined function
        calculateRoots(a, b, c);
    }

    cout << "\nPress any key to exit...";
    getch();
    return 0;
}

// User-defined function definition
void calculateRoots(double a, double b, double c) {
    // Using pre-defined function pow() for b squared
    double determinant = pow(b, 2) - (4 * a * c);
    
    cout << "------------------------------------" << endl;
    
    if (determinant == 0) {
        // Case 1: One real root
        float x = -b / (2 * a);
        cout << "Discriminant is zero. One real solution:" << endl;
        cout << "x = " << x << endl;
    }
    else if (determinant > 0) {
        // Case 2: Two distinct real roots
        // FIX: Added proper parentheses for the numerator
        float x1 = (-b + sqrt(determinant)) / (2 * a);
        float x2 = (-b - sqrt(determinant)) / (2 * a);
        cout << "Discriminant is positive. Two real solutions:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else {
        // Case 3: Complex roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-determinant) / (2 * a);
        cout << "Discriminant is negative. Complex solutions:" << endl;
        cout << "x = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
}