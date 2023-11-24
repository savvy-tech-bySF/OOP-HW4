
#include "bee.hpp"
#include "HUMania.hpp"

// in project implementation this draw function should only be in superclass
//void Bee::draw(){
////    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
//}


// fly() is overrided from the superclass
void Bee::fly(){
    int i = glob_i;
//    moverRect.x += 5;
    static Uint32 t = SDL_GetTicks();
    static bool pause = false;
    int random_number = rand() % 20;
    // if (random_number >= 1 || random_number <= 19) {}
    if (random_number != 1 && !pause) {
        this->unit_data.moverRect.x += 5;
    }
    else
    {
        pause = true;
        if (SDL_GetTicks() >= t+500) {
            t = SDL_GetTicks();
            pause = false;
        } 
    }
    // Delete if it reaches at the end of the screen
    if (this->unit_data.moverRect.x > 1000) {
        del = true;
        toBeDeleted = this;
    }
    else
    {
        del=false;
    }
}

Bee::Bee(){
    // src coordinates from assets.png file, they have been found using spritecow.com
//    srcRect = {7, 88, 160, 103};
    srcRect = bee_states[0][0];

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}
