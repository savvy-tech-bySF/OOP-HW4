#pragma once

#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"

const SDL_Rect pigeon_states[3][1] = {{7, 88,  160, 103},
                                      {0, 237, 155, 85},
                                      {2, 361, 160, 125}};

class Pigeon : public Unit {

    SDL_Rect srcRect{}, moverRect{};
    int frame = 0;

public:
    // add the fly function here as well.
//    void draw() override;

    void fly() override;

    Pigeon();

    // may add other overloaded constructors here...
    ~Pigeon() = default;
};
