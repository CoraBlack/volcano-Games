#include "ListUI.h"
#include <iostream>

void ListUI::Show() {
    for (auto i : GetOperations()){ std::cout << "[" + i.key << "] " + i.words << std::endl; }
}

