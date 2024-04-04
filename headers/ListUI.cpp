#include "ListUI.h"
#include <iostream>
#include "statement.h"

// Show the list of operations and wait for a key press to continue.
void ListUI::Show() {
    for (auto i : GetOperations()){ 
        std::cout << i.color << "[" << (char)i.key << "] " << i.words << RESET << std::endl; 
    }
    return this->WaitsForKeyPress();
}

