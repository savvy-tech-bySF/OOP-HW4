#pragma once

#include "SDL_rect.h"
#include <vector>
#include<SDL.h>
#include "drawing.hpp"

using namespace std;

const SDL_Rect all_birds_state[3][3] = {
        {{7, 88, 160, 103},
                {0, 237, 155, 85},
                {2, 361, 160, 125}},
        {{256, 24,  175, 135},
                {257, 182, 195, 215},
                {248, 433, 250, 180}},
        {{63,  619, 152, 167},
                {234, 630, 165, 165},
                {409, 650, 172, 148}}
};

struct UnitData
{
public:
    SDL_Rect srcRect, moverRect;
};


class Unit {
public:
    Unit() = default;
    virtual void draw(int num, int x, int y);
//    virtual void draw(UnitData unit_data_draw);
    virtual void fly() {};
    ~Unit() = default;

    UnitData unit_data{};
protected:

    SDL_Rect pigeon_start = {7, 88, 160, 103};
    SDL_Rect pigeon_middle = {0, 237, 155, 85};
    SDL_Rect pigeon_end = {2, 361, 160, 125};

    SDL_Rect butterfly_start = {256, 24, 175, 135};
    SDL_Rect butterfly_middle = {257, 182, 195, 215};
    SDL_Rect butterfly_end = {248, 433, 250, 180};

    SDL_Rect bee_start = {63, 619, 152, 167};
    SDL_Rect bee_middle = {234, 630, 165, 165};
    SDL_Rect bee_end = {409, 650, 172, 148};
};
