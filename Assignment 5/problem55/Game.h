#ifndef _GAME_H
#define _GAME_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
public:
    Game(const std::vector<std::string>& names);
    
    ~Game();
    
    //plays the game of blackjack    
    void Play();

private:
    Deck m_Deck;
    House m_House;
    std::vector<Player> m_Players;  
};
#endif

