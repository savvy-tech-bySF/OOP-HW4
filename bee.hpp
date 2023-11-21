#pragma once

#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

const SDL_Rect bee_states[3][1] = {{63,  619, 152, 167},
                                         {234, 630, 165, 165},
                                         {409, 650, 172, 148}};

class Bee : public Unit {

    SDL_Rect srcRect{}, moverRect{};
    int frame = 0;

public:
    // add the fly function here as well.
//    void draw() override;

    void fly() override;

    Bee();

    // may add other overloaded constructors here...
    ~Bee() = default;
};
