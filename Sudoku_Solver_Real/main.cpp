#include <iostream>
#include <vector>
#include "Grid.h"

using std::vector;
using std::endl;

int main() {
    Grid grid(10, 5);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            grid.set(i, j, i + j);
        }
    }
    grid.print();
    return 0;
}