/*
std::cout <<
std::endl
std::cin >>
*/
#include <iostream>
#include <chrono>
#include "HeavyData.h"
#include "HeavyVector.h"
#include "HeavyVectorPtr.h"
#include "HeavyList.h"

using My_time = std::chrono::microseconds; //псевдоним типа данных
std::chrono::_V2::steady_clock::time_point startTime;
std::chrono::_V2::steady_clock::time_point endTime;
My_time durationTime;

void resetTime(){
    startTime = std::chrono::steady_clock::now();
}

void fixCurrTime(){
    endTime = std::chrono::steady_clock::now();
    durationTime = std::chrono::duration_cast<std::chrono::microseconds>(endTime-startTime);
}

int main(){
/*
    std::cout << "Int: " << sizeof(int) << "\n";
    std::cout << "Double: " << sizeof(double) << "\n";
    //std::cout << "Struct: " << sizeof(HeavyData) << "\n";

    std::cout << "Привет" << std::endl;
*/
    resetTime();
    fixCurrTime();
    printf("Time skipped: %d\n", durationTime.count());

/*
    auto startTime = std::chrono::steady_clock::now();
    HeavyList list = initList();
    auto endTime = std::chrono::steady_clock::now();
    auto timeDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime);
    printf("List init: %ld ns\n", timeDuration.count());

    startTime = std::chrono::steady_clock::now();
    HeavyVector vector = initVector(100);
    endTime = std::chrono::steady_clock::now();
    timeDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime);
    printf("Vector init: %ld ns\n", timeDuration.count());

    startTime = std::chrono::steady_clock::now();
    HeavyVectorPtr vectorptr = initVectorPtr(100);
    endTime = std::chrono::steady_clock::now();
    timeDuration = std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime);
    printf("Vectorptr init: %ld ns\n", timeDuration.count());
*/
    return 0;
}