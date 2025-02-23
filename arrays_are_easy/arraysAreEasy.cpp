// arraysAreEasy.cpp
// CIT 66
// Spring 25
// by Mark Edmunds
// Program creates a 3-D int array

#include <iostream>


using namespace std;
int main() {
    // Creates a sudoku like grid of ints
    const int nGrid [3][3][9] = {
        {
            {5, 3, 4, 6, 7, 8, 9, 1, 2},
            {6, 7, 2, 1, 9, 5, 3, 4, 8},
            {1, 9, 8, 3, 4, 2, 5, 6, 7}
        },
        {
            {8, 5, 9, 7, 6, 1, 4, 2, 3},
            {4, 2, 6, 8, 5, 3, 7, 9, 1},
            {7, 1, 3, 9, 2, 4, 8, 5, 6}
        },
        {
            {9, 6, 1, 5, 3, 7, 2, 8, 4},
            {2, 8, 7, 4, 1, 9, 6, 3, 5},
            {3, 4, 5, 2, 8, 6, 1, 7, 9}
        }

    };
    // loop through the grid
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) { // column
            cout << "|";
            for (int e = 0; e < 9; e++) { // row
                cout << " " <<nGrid[i][j][e];
                if ((e + 1) % 3 == 0) cout << " |";
            }
            cout << endl;
        }
        cout << endl;
    };
    return 0;
}