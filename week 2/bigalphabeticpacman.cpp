#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printPacman() {
    // Each letter is represented as 7 rows of strings
    vector<string> P = {"PPPPPP  ", "P     P ", "P     P ", "PPPPPP  ", "P       ", "P       ", "P       "};
    vector<string> A = {"   AA   ", "  A  A  ", " A    A ", "AAAAAA  ", "A    A  ", "A    A  ", "A    A  "};
    vector<string> C = {"  CCCC  ", " C    C ", " C      ", " C      ", " C      ", " C    C ", "  CCCC  "};
    vector<string> M = {"M    M ", "MM  MM ", "M MM M ", "M    M ", "M    M ", "M    M ", "M    M "};
    vector<string> N = {"N    N ", "NN   N ", "N N  N ", "N  N N ", "N   NN ", "N    N ", "N    N "};

    // Combine them into a vector of vectors for easier iteration
    vector<vector<string>> letters = {P, A, C, M, A, N};

    // Print row by row (7 rows total)
    for (int row = 0; row < 7; ++row) {
        for (const auto& letter : letters) {
            cout << letter[row] << "  "; // Space between letters
        }
        cout << endl;
    }
}

int main() {
    cout << "\n--- ARCADE CLASSIC ---\n" << endl;
    printPacman();
    cout << "\n----------------------\n" << endl;
    
    return 0;
}