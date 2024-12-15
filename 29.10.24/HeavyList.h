#ifndef HEAVY_LIST_H
#define HEAVY_LIST_H

#include <iostream>
#include "HeavyData.h"

struct HeavyListNode{ //Связный список
    HeavyData data;
    HeavyListNode* next;
};

struct HeavyList{ //Связный список
    HeavyListNode* head;
    HeavyListNode* tail;
};

HeavyList initList(){
    HeavyList* list = new HeavyList;
    list->head = nullptr; //Указатель на начало списка
    list->tail = nullptr; //Указатель на конец списка

    return *list;
}

void list_push_back(HeavyListNode& list, HeavyListNode& elem){

}

#endif