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
        int key;           //key to be pressed
        std::string color; //color to display the words on the screen
        std::string words; //words to display on the screen
        void (*func)();    //function to be called when the key is pressed
    };

    BaseUI() = default;
    virtual~BaseUI() = default;

    void AddOperation(int key, std::string color, std::string words,  void (*func)()); //function to add an operation to the list by key value
    void AddOperation(char key, std::string color, std::string words,  void (*func)()); //function to add an operation to the list by key word
    void AddOperation(std::vector<Operation> ops);//function to add some operations to the list by a vector of operations

    void WaitsForKeyPress(); //function to wait for a key press and call the corresponding function in the list

    inline std::vector<Operation> GetOperations(){ return operations; }; //function to get the list of operations for child classes to use

private:

    std::vector<Operation> operations; //vector to store the operations

};

#endif