#include "BaseUI.h"
#include <conio.h>

// Add an operation with character key
void BaseUI::AddOperation(char key, std::string color, std::string words, void (*func)()){
    this->operations.push_back({key, color, words, func});
}

// Add an operation with integer key
void BaseUI::AddOperation(int key, std::string color, std::string words, void (*func)()){
    this->operations.push_back({key, color , words, func});
}

// Add an operation with vector of operations
void BaseUI::AddOperation(std::vector<Operation> ops){
    for(auto i : ops){ this->operations.push_back(i); }
} 

// Wait for key press
void BaseUI::WaitsForKeyPress(){

    int key = 0;
    bool flag = true;

    while(flag){

        key = _getch();

        for(auto i : this->operations){

            if (i.key == key && i.func != nullptr){
                return i.func();
            }

        }
    }
}
