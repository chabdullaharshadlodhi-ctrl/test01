#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

string pyramidVolume(double length, double width, double height, string unit) {
    // Calculate initial volume in cubic meters
    double volume = (length * width * height) / 3.0;

    // Apply conversion factor based on the requested unit
    if (unit == "millimeters") {
        volume *= 1e9;  
    } else if (unit == "centimeters") {
        volume *= 1e6;  
    } else if (unit == "kilometers") {
        volume *= 1e-9; 
    }

    // Format output to exactly 3 decimal places using string stream
    ostringstream formattedOutput;
    formattedOutput << fixed << setprecision(3) << volume << " cubic " << unit;
    
    return formattedOutput.str();
}

int main() {
    double pLength, pWidth, pHeight;
    string desiredUnit;

    cout << "Input base length, width, and height (in meters): ";
    cin >> pLength >> pWidth >> pHeight;

    cout << "Input desired unit (millimeters, centimeters, meters, kilometers): ";
    cin >> desiredUnit;

    cout << pyramidVolume(pLength, pWidth, pHeight, desiredUnit) << endl;

    return 0;
}