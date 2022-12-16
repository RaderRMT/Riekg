#pragma once

typedef struct s_position {
    int x;
    int y;
    int z;

    bool operator<(const s_position& position) const {
        return this->x < position.x || this->y < position.y || this->z < position.z;
    }
} Position;
