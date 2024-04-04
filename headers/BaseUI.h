#ifndef BASEUI_H
#define BASEUI_H

#include <string>
#include <vector>

class BaseUI 
{
public:

    //struct to store the operation details
    struct Operation
    {
        char key;          //key to be pressed
        std::string words; //words to display on the screen
        void (*func)();    //function to be called when the key is pressed
    };

    BaseUI() = default;
    virtual~BaseUI() = default;

    void AddOperation(int key, std::string words, void (*func)()); //function to add an operation to the list by key value
    void AddOperation(char key, std::string words, void (*func)()); //function to add an operation to the list by key word
    void AddOperation(std::vector<Operation> ops); //function to add some operations to the list by a vector of operations

    inline std::vector<Operation> GetOperations(){ return operations; }; //function to get the list of operations for child classes to use

private:

    std::vector<Operation> operations; //vector to store the operations

};

#endif