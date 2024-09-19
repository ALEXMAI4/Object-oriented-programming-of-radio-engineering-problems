/* ЗАДАНИЕ 2
    Создать одномерный целочисленный массив из N элементов.
    Проинициализировать случайными значениями и вывести на экран.
    Найти индексы всех локальных максимумов, вывести на экран.
*/

#include <iostream>
#include <time.h>

const int ARR_SIZE = 10;


int main(){ 

    int arr[ARR_SIZE];

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        arr[i] = rand() % 11;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    for (size_t i = 1; i < ARR_SIZE-1; i++){
        if ((arr[i-1]<=arr[i])&&(arr[i]>arr[i+1])){
            std::cout << "\tlocal max : ARR[" << i << "] = " << arr[i] << std::endl;
        }
    }

    return 0;
}
