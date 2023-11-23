#include "pigeon.hpp"
#include <iostream>
#include "HUMania.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
//void Pigeon::draw(){
////    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
//    Unit::draw();
//}


// fly() is overrided from the superclass
void Pigeon::fly(){
    //
    int i = glob_i;
    this->unit_data.moverRect.x += 5;

    if (this->unit_data.moverRect.x > 1000) {
        this->unit_data.moverRect.x = 0;
    }
}

Pigeon::Pigeon(){
    // src coordinates from assets.png file, they have been found using spritecow.com
//    srcRect = {7, 88, 160, 103};
    srcRect = pigeon_states[0][0];

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {50, 50, 50, 50};
}
