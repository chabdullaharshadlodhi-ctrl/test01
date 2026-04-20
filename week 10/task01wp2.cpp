#include <iostream>
using namespace std;
int myFunction(int number)
{
    int total;
    total = number * 5;
    return total;
}
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int result = myFunction(number);
    cout << "Total: " << result << endl;
    return 0;
}