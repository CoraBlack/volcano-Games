#include <iostream>
#include <stdlib.h>
#include "headers/ListUI.h"

int main(){

    ListUI start_ui;
    start_ui.AddOperation('1', "Game1", nullptr);
    start_ui.AddOperation('2', "Game2", nullptr);

    start_ui.Show();

    system("pause");
    
    return 0;
}