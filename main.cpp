#include <iostream>
#include <stdlib.h>
#include "Dicegame/headers/Dicegame.h"
#include "headers/statement.h"
#include "headers/ListUI.h"

int main(){

    ListUI start_ui;
    std::vector<BaseUI::Operation> game_list = {
        {'1', YELLOW, "角色色子大乱斗", &Dicegame::DiceGameStart},
        {'2', YELLOW, "恶魔轮赌", nullptr}
    };

    //Start UI
    std::cout << "欢迎来到Cora的CPP Games!" << std::endl;
    start_ui.AddOperation(game_list);
    start_ui.Show();
    
    return 0;
}