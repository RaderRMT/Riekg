#pragma once

#include "Direction.hpp"
#include <vector>
typedef struct s_position {
    int x;
    int y;
    int z;

    bool operator<(const s_position& position) const {
        return this->x < position.x || this->y < position.y || this->z < position.z;
    }
} Position;

static Position EMPTY_POSITION {  0,  0,  0 };
static Position NORTH_POSITION {  1,  0,  0 };
static Position SOUTH_POSITION { -1,  0,  0 };
static Position EAST_POSITION  {  0,  0,  1 };
static Position WEST_POSITION  {  0,  0, -1 };
static Position UP_POSITION    {  0,  1,  0 };
static Position DOWN_POSITION  {  0, -1,  0 };

static std::vector<Position> DIRECTION_POSITIONS {
        NORTH_POSITION,
        SOUTH_POSITION,
        EAST_POSITION,
        WEST_POSITION,
        UP_POSITION,
        DOWN_POSITION
};
