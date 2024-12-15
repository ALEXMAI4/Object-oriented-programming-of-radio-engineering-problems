#ifndef HEAVY_DATA_H
#define HEAVY_DATA_H

#include <iostream>

constexpr int HEAVY_SIZE = 10000;

struct HeavyData{
    double heavyDouble[HEAVY_SIZE];
    long int heavyInt[HEAVY_SIZE];
};

#endif