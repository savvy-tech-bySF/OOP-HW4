#include "Unit.hpp"
#include "HUMania.hpp"
#include <iostream>

using namespace std;

void Unit::draw(int num) {
    cout << "Unit::draw()" << endl;

    // std::srand(std::time(0));
    // int random_number = std::rand() % 3;
//    int random_number = rand() % 3;
    int random_number = num;
    unit_data.moverRect = {glob_x, glob_y, 50, 50};
//    unit_data.srcRect = {0, 0, 0, 0};
//    unit_data.moverRect = {glob_x, glob_y, 50, 50};

    if (random_number == 0) {
        unit_data.srcRect = pigeon_start;
        bird_number.push_back(0);
//            butterfly_state.push_back(false);
    } else if (random_number == 1) {
        unit_data.srcRect = butterfly_start;
        bird_number.push_back(1);
//            butterfly_state.push_back(true);
    } else if (random_number == 2) {
        unit_data.srcRect = bee_start;
        bird_number.push_back(2);
//            butterfly_state.push_back(false);
    }

    butterfly_state.push_back(true);

    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &unit_data.srcRect, &unit_data.moverRect);
    std::cout << "Created " << unit_data.srcRect.x << " -- " << unit_data.srcRect.y << std::endl;
    unit_list_pointer.push_back(this);
    birds_state.push_back(0);
    draw_now = false;
}

//void Unit::draw(UnitData unit_data_draw) {
////    cout << "Unit::draw()" << endl;
////
////    // std::srand(std::time(0));
////    // int random_number = std::rand() % 3;
////    int random_number = rand() % 3;
////    unit_data.moverRect = {glob_x, glob_y, 50, 50};
//////    unit_data.srcRect = {0, 0, 0, 0};
//////    unit_data.moverRect = {glob_x, glob_y, 50, 50};
////
////    if (random_number == 0) {
////        unit_data.srcRect = pigeon_start;
////        bird_number.push_back(0);
//////            butterfly_state.push_back(false);
////    } else if (random_number == 1) {
////        unit_data.srcRect = butterfly_start;
////        bird_number.push_back(1);
//////            butterfly_state.push_back(true);
////    } else if (random_number == 2) {
////        unit_data.srcRect = bee_start;
////        bird_number.push_back(2);
//////            butterfly_state.push_back(false);
////    }
////
////    butterfly_state.push_back(true);
//
//    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &unit_data_draw.srcRect, &unit_data_draw.moverRect);
////    std::cout << "Created " << unit_data.srcRect.x << " -- " << unit_data.srcRect.y << std::endl;
////    unit_list_pointer.push_back(this);
////    birds_state.push_back(0);
////    draw_now = false;
//}
