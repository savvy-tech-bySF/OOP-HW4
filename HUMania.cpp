#include <iostream>
#include "HUMania.hpp"

using namespace std;

int glob_x = 0;
int glob_y = 0;
int glob_i = 0;
bool draw_now = false;

vector<int> bird_number;
vector<int> birds_state;
vector<bool> butterfly_state;
vector<Unit*> unit_list_pointer;


void HUMania::drawObjects()
{
//    Unit* pigeon = new Pigeon();
    // call draw functions of all the objects here
//    p1.draw();
    if (draw_now) {
        int random_number = rand() % 3;
        if (random_number == 0) {
            Unit* pigeon = new Pigeon();
            pigeon->draw(random_number);
        } else if (random_number == 1) {
            Unit* butterfly = new Butterfly();
            butterfly->draw(random_number);
        } else if (random_number == 2) {
            Unit* bee = new Bee();
            bee->draw(random_number);
        }
    }

    int size_of_unit_list = unit_list_pointer.size();

    for (int i = 0; i < size_of_unit_list; i++) {
        if (birds_state[i] == 2) {
            birds_state[i] = 0;
        }

        unit_list_pointer[i]->unit_data.srcRect = all_birds_state[bird_number[i]][birds_state[i]];

        SDL_RenderCopy(Drawing::gRenderer, Drawing::assets,
                       &unit_list_pointer[i]->unit_data.srcRect, &unit_list_pointer[i]->unit_data.moverRect);
        birds_state[i] += 1;

        if (bird_number[i] == 0) {
            glob_i = i;
            unit_list_pointer[i]->fly();
        }
        else if (bird_number[i] == 1) {
            glob_i = i;
            unit_list_pointer[i]->fly();
        }
        else if (bird_number[i] == 2) {
            glob_i = i;
            unit_list_pointer[i]->fly();
        }

        if (birds_state[i] == 2) {
            birds_state[i] = 0;
        }
    }

}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    draw_now = true;
    glob_x = x;
    glob_y = y;
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
}
