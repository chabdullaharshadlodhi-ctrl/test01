#include <iostream>
using namespace std;

int main() {
    string name;

    while (true) {
        cout << "Enter a name (type 'END' to stop): ";
        cin >> name;

        if (name == "END") {
            break; 
        }

        cout << "Hello " << name << endl;
    }

    cout << "Program stops you have typed END" << endl;

    return 0;
}