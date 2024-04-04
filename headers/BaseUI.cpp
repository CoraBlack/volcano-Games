#include "BaseUI.h"

// Add an operation with character key
void BaseUI::AddOperation(char key, std::string words, void (*func)()){
    Operation op = {key, words, func};
    this->operations.push_back(op);
}

// Add an operation with integer key
void BaseUI::AddOperation(int key, std::string words, void (*func)()){
    Operation op = {(char)key, words, func};
    this->operations.push_back(op);
}

// Add an operation with vector of operations
void BaseUI::AddOperation(std::vector<Operation> ops){
    for(auto i : ops){ this->operations.push_back(i); }
}  