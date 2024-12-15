#ifndef HEAVY_VECTOR_H
#define HEAVY_VECTOR_H

#include <iostream>
#include "HeavyData.h"

struct HeavyVector{ //Последовательное хранение
    int size = 0;
    int lenght = 0;
    HeavyData* data;
};

HeavyVector initVector(size_t size){
    HeavyVector* outV = new HeavyVector;
    outV->lenght = size;
    outV->size = 0;
    outV->data = new HeavyData[size];

    return *outV;
}

#endif