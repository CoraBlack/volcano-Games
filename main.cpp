#include <iostream>
#include <stdlib.h>
#include "Dicegame/headers/Dicegame.h"
#include "headers/statement.h"
#include "headers/ListUI.h"

int main(){

    ListUI start_ui;
    std::vector<BaseUI::Operation> game_list = {
        {'1', YELLOW, "��ɫɫ�Ӵ��Ҷ�", &Dicegame::DiceGameStart},
        {'2', YELLOW, "��ħ�ֶ�", nullptr}
    };

    //Start UI
    std::cout << "��ӭ����Cora��CPP Games!" << std::endl;
    start_ui.AddOperation(game_list);
    start_ui.Show();
    
    return 0;
}