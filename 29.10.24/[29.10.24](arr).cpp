/*
std::cout <<
std::endl
std::cin >>
*/
#include <iostream>
#include "HeavyData.h"
#include "HeavyVector.h"
#include "HeavyVectorPtr.h"
//#include "HeavyList.h"

int main(){

    std::cout << "Int: " << sizeof(int) << "\n";
    std::cout << "Double: " << sizeof(double) << "\n";
    std::cout << "Struct: " << sizeof(HeavyData) << "\n";

    std::cout << "Привет" << std::endl;

    return 0;
}