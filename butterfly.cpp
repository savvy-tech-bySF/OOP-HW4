#include "butterfly.hpp"
#include "HUMania.hpp"

//void Butterfly::draw(){
////    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
//}


// fly() is overrided from the superclass
void Butterfly::fly(){
    int i = glob_i;
    this->unit_data.moverRect.x += 5;
    if (this->unit_data.moverRect.y > 590) {
        // unit_list[i].moverRect.y = 0;
        butterfly_state[i] = false;
    } else if (this->unit_data.moverRect.y < 6) {
        butterfly_state[i] = true;
    }

    if (butterfly_state[i]) {
        this->unit_data.moverRect.y += 5;
    } else {
        this->unit_data.moverRect.y -= 5;
    }

    if (this->unit_data.moverRect.x > 1000) {
        this->unit_data.moverRect.x = 0;
    }
//    moverRect.x += 5;
//
//    if (moverRect.y > 590) {
//        butterfly_state[i] = false;
//    } else if (moverRect.y < 6) {
//        butterfly_state[i] = true;
//    }
//
//    if (butterfly_state[i]) {
//        moverRect.y += 5;
//    } else {
//        moverRect.y -= 5;
//    }
//
//    if (birds_state[i] == 2) {
//        birds_state[i] = 0;
//    }
}

Butterfly::Butterfly(){
    // src coordinates from assets.png file, they have been found using spritecow.com
//    srcRect = {7, 88, 160, 103};
    srcRect = butterfly_states[0][0];

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}
