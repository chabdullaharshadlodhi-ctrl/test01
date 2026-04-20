#include <iostream>
using namespace std;

// Function to calculate and return the final price
float taxCalculator(char type, float price) {
    float taxRate = 0.0;
    
    // Determine tax rate based on vehicle code
    switch(type) {
        case 'M': taxRate = 6.0; break;
        case 'E': taxRate = 8.0; break;
        case 'S': taxRate = 10.0; break;
        case 'V': taxRate = 12.0; break;
        case 'T': taxRate = 15.0; break;
        default: 
            cout << "Invalid vehicle type!" << endl;
            return price; // Return base price if invalid
    }
    
    // Calculate final price using the given formulas
    float taxAmount = price * (taxRate / 100.0);
    float finalPrice = price + taxAmount;
    
    return finalPrice;
}

int main() {
    char vehicleType;
    float vehiclePrice;
    
    // Take user input
    cout << "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> vehicleType;
    cout << "Enter the price of the vehicle: ";
    cin >> vehiclePrice;
    
    // Calculate the final price
    float finalResult = taxCalculator(vehicleType, vehiclePrice);
    
    // Display the output in the required format
    cout << "The final price on a vehicle of type " << vehicleType 
         << " after adding the tax is $" << finalResult << "." << endl;
         
    return 0;
}