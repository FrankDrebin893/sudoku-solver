#include <iostream>

using namespace std;

// https://www.conceptispuzzles.com/index.aspx?uri=puzzle/sudoku/techniques

bool print_puzzle(int puzzle[9][9]) {
    cout << "Printing puzzle:" << endl;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << puzzle[i][j] << " ";
        }
        cout << endl;
    }
    return true;
}

void solve_sudoku(int puzzle[9][9]) {
    
}

int main()
{
    cout << "Running Sudoku solver" << endl;
    
    int puzzle[9][9] {
        {0,1,0,0,8,6,0,3,2},
        {0,2,0,0,0,9,6,5,0},
        {6,0,3,0,0,0,9,1,0},
        {0,0,1,5,4,3,2,0,6},
        {0,4,0,0,2,0,0,8,1},
        {2,5,0,1,0,0,0,0,0},
        {7,0,0,0,0,5,0,0,0},
        {1,0,0,0,7,0,8,6,5},
        {0,9,8,0,0,1,3,0,4}
    };

    print_puzzle(puzzle);
}