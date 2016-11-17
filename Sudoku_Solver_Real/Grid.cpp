//
// Created by David on 11/16/2016.
//

#include <iostream>
#include "Grid.h"

Grid::Grid(int height, int width) {
    Height = height;
    Width = width;
    Data = vector<vector<int>>();
    Data.reserve(height);
    for (int i = 0; i < height; ++i) {
        vector<int> inner;
        inner.reserve(width);
        for (int j = 0; j < width; ++j) {
            inner.push_back(0);
        }
        Data.push_back(inner);
    }
}

void Grid::print() {
    for (int i = 0; i < Height; ++i) {
        for (int j = 0; j < Width; ++j) {
            std::cout << get(i, j) << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::set(int y, int x, int value) {
    Data.at(y).at(x) = value;
}

int Grid::get(int y, int x) {
    return Data.at(y).at(x);
}
