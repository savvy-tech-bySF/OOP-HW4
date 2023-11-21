#pragma once

#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

const SDL_Rect butterfly_states[3][1] = {{256, 24,  175, 135},
                                         {257, 182, 195, 215},
                                         {248, 433, 250, 180}};

class Butterfly : public Unit {

    SDL_Rect srcRect{}, moverRect{};
    int frame = 0;

public:
    // add the fly function here as well.
//    void draw() override;

    void fly() override;

    Butterfly();

    // may add other overloaded constructors here...
    ~Butterfly() = default;
};
