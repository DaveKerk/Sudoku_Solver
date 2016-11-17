//
// Created by David on 11/16/2016.
//

#ifndef SUDOKU_SOLVER_REAL_GRID_H
#define SUDOKU_SOLVER_REAL_GRID_H
#include <vector>
using std::vector;

class Grid {
public:
    Grid(int height,int width);
    int Height;
    int Width;
    vector<vector<int>> Data;
    int get(int y, int x);
    void set (int y, int x, int value);
    void print();

};



#endif //SUDOKU_SOLVER_REAL_GRID_H
