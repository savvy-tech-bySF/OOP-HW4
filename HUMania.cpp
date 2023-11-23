#include <iostream>
#include "HUMania.hpp"

using namespace std;

// int glob_x = 0;
// int glob_y = 0;
int glob_i = 0;
bool del = false;
Unit* toBeDeleted = nullptr;

// bool draw_now = false;

vector<int> bird_number;
vector<int> birds_state;
vector<bool> butterfly_state;
list<Unit*> unit_list_pointer;


void HUMania::drawObjects()
{
//    Unit* pigeon = new Pigeon();
    // call draw functions of all the objects here
//    p1.draw();

    // int size_of_unit_list = unit_list_pointer.size();
    int i = 0;
    for (Unit* u: unit_list_pointer) {
        if (birds_state[i] == 2) {
            birds_state[i] = 0;
        }

        u->unit_data.srcRect = all_birds_state[bird_number[i]][birds_state[i]];

        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets,
                       &u->unit_data.srcRect, &u->unit_data.moverRect);
        birds_state[i] += 1;

        u->fly();
        glob_i = i;

        // if (bird_number[i] == 0) {
        // }
        // else if (bird_number[i] == 1) {
        //     glob_i = i;
        //     u->fly();
        // }
        // else if (bird_number[i] == 2) {
        //     glob_i = i;
        //     u->fly();
        // }

        if (birds_state[i] == 2) {
            birds_state[i] = 0;
        }
        i++;
    }
    if (del)
    {
        delete toBeDeleted;
        toBeDeleted = nullptr;
        unit_list_pointer.remove(toBeDeleted);
        birds_state.erase(birds_state.begin() + i);
        bird_number.erase(bird_number.begin() + i);
        butterfly_state.erase(butterfly_state.begin() + i);
        del = false;
    }

}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    // draw_now = true;
    // if (draw_now) {
    // }
        int random_number = rand() % 3;
        if (random_number == 0) {
            Unit* pigeon = new Pigeon();
            pigeon->draw(random_number, x, y);
        } else if (random_number == 1) {
            Unit* butterfly = new Butterfly();
            butterfly->draw(random_number, x, y);
        } else if (random_number == 2) {
            Unit* bee = new Bee();
            bee->draw(random_number, x, y);
        }
    // glob_x = x;
    // glob_y = y;
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}
