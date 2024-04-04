<<<<<<< HEAD
// This is the main file of the game

#include <iostream>
#include "Global_Include/statement.h"
#include <stdlib.h>

int main() {
    
    
    
    return 0;

=======
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
>>>>>>> 0faa4c3 (增加了各个类的基本成员函数)
}