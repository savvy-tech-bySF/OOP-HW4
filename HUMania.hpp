#pragma once

#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "Unit.hpp"
#include<vector>
#include<list>

using namespace std;


extern int glob_x;
extern int glob_y;
extern int glob_i;
extern bool draw_now;

extern vector<int> bird_number;
extern vector<int> birds_state;
extern vector<bool> butterfly_state;
extern list<Unit*> unit_list_pointer;
extern bool del;
extern Unit* toBeDeleted;

class HUMania{

    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
//    Pigeon p1;

    //Create your list here
    public:
    HUMania() = default;
    
    void drawObjects();
    void createObject(int, int);
    
    // create destructor which deletes all dynamic objects
    ~HUMania() = default;
protected:
//    vector<UnitData> unit_list;
    Unit * unit;
    UnitData unit_data_humania{};

    SDL_Rect pigeon_start = {7, 88, 160, 103};

    SDL_Rect butterfly_start = {256, 24, 175, 135};

    SDL_Rect bee_start = {63, 619, 152, 167};
};
