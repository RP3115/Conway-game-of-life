#include "Workflow.h"
#include <iostream>

Workflow::Workflow(int rows, int cols) : myGrid(rows, cols) {}

void Workflow::createRandomGrid() {
    std::cout << "Creating a random grid..." << std::endl;
    myGrid.randomizeGrid();
    myGrid.printGrid();
}

void Workflow::simulateRandomGrid(int timesteps) {
    std::cout << "Simulating the random grid for " << timesteps << " timesteps..." << std::endl;
    mySimulation.update_Grid(myGrid, timesteps);
}
