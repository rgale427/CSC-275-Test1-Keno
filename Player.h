//
// Created by thedi on 10/16/2026.
//

#ifndef CSC_275_TEST1_KENO_PLAYER_H
#define CSC_275_TEST1_KENO_PLAYER_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

class Player
{
private:
    std::vector<int> m_playerNumbers;
public:
    void inputPlayerNumbers();
    std::vector<int> getPlayerNumbers();
    void printPlayerNumbers();
    void clearPlayerNumbers();
};


#endif //CSC_275_TEST1_KENO_PLAYER_H
