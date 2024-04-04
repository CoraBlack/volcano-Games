#include "headers/Dicegame.h"
#include <iostream>
#include <stdlib.h>
#include "statement.h"

void Dicegame::DiceGameStart()
{
    system("cls");
    std::cout << YELLOW << "Loading Dicegame..." << RESET << std::endl;
    DiceGameInitialize();
    std::cout << GREEN << "Dicegame loaded successfully!" << RESET << std::endl;
    system("pause");

    return;
}

void Dicegame::DiceGameInitialize()
{

}