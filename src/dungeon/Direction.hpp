#pragma once

enum Direction {
    NORTH,
    SOUTH,
    EAST,
    WEST,
    UP,
    DOWN,
    NONE
};

inline Direction inverse(Direction direction) {
    switch (direction) {
        case NORTH:
            return SOUTH;
        case SOUTH:
            return NORTH;
        case EAST:
            return WEST;
        case WEST:
            return EAST;
        case UP:
            return DOWN;
        case DOWN:
            return UP;
        default:
            return NORTH;
    }
}
