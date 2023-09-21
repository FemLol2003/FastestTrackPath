#ifndef __STRUCTURES_INCLUDED__
#define __STRUCTURES_INCLUDED__

#include <stdbool.h>
#include <stdint.h>

typedef struct {
    uint8_t x1;
    uint8_t y1;
    uint8_t x2;
    uint8_t y2;
    uint8_t num;
} Negyzet;

typedef struct {
    int8_t x;
    int8_t y;
} Coord;

Negyzet createNegyzet(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint8_t num) {
    Negyzet n;
    n.x1 = x1;
    n.y1 = y1;
    n.x2 = x2;
    n.y2 = y2;
    n.num = num;
    return n;
}

Coord createCoord(int8_t x, int8_t y) {
    Coord c;
    c.x = x;
    c.y = y;
    return c;
}

Coord addCoords(Coord a, Coord b) {
    Coord result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}
int coordsFindIndex(Coord cords[], int max, Coord fnd)
{
    for (int i = 0; i <= max + 1; i++)
    {
        if(cords[i].x == fnd.x && cords[i].y == fnd.y)
            return i;
    }
    return -1;
}

bool compareCoords(Coord a, Coord b) {
    return a.x == b.x && a.y == b.y;
}

#endif