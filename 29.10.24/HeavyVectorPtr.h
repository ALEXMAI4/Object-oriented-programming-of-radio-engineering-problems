#ifndef HEAVY_VECTOR_PTR_H
#define HEAVY_VECTOR_PTR_H

#include <iostream>
#include "HeavyData.h"

struct HeavyVectorPtr{ //Косвенно-адресное хранение
    int size = 0;
    int lenght = 0;
    HeavyData** data;
};

HeavyVectorPtr initVectorPtr(size_t size){
    HeavyVectorPtr* vector = new HeavyVectorPtr;
    vector->lenght = size;
    vector->size = 0;
    vector->data = new HeavyData*[size];

    return *vector;
}

#endif