#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

// Function Prototype
string calculatePoolState(int V, int P1, int P2, float H);

int main() {
    int V, P1, P2;
    float H;

    cout << "Enter Pool Volume (V): ";
    cin >> V;
    cout << "Enter Pipe 1 flow rate (P1): ";
    cin >> P1;
    cout << "Enter Pipe 2 flow rate (P2): ";
    cin >> P2;
    cout << "Enter hours worker is absent (H): ";
    cin >> H;

    // Call function and display result
    cout << calculatePoolState(V, P1, P2, H) << endl;

    getch();
    return 0;
}

string calculatePoolState(int V, int P1, int P2, float H) {
    float totalWater = (P1 + P2) * H;

    if (totalWater <= V) {
        // Calculate percentages
        int poolFullPercent = (totalWater / V) * 100;
        int p1Percent = (P1 * H / totalWater) * 100;
        int p2Percent = (P2 * H / totalWater) * 100;

        return "The pool is " + to_string(poolFullPercent) + "% full. Pipe 1: " + 
               to_string(p1Percent) + "%. Pipe 2: " + to_string(p2Percent) + "%.";
    } 
    else {
        // Calculate overflow
        float overflow = totalWater - V;
        return "For " + to_string(H) + " hours the pool overflows with " + 
               to_string(overflow) + " liters.";
    }
}