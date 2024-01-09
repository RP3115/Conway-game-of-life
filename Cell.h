#ifndef CELL_H
#define CELL_H

class Cell {
private:
    int _state;  // Either alive or dead
    const int _alive;
    const int _dead;

public:
    // Constructor
    Cell(int initialState = 0);
    // Copy constructor
    //Cell(const Cell& other);
    // Copy assignment operator
    Cell& operator=(const Cell& other);

    // Getter for accessing the cell state
    int getState() const;
    // Setter for modifying the cell state
    void setState(int newState);
    //Setter for random state
    void set_random_State();
    //Kick this function out later/Use getState instead!
    bool isAlive() const;

    // Destructor 
    ~Cell();  
};

#endif
