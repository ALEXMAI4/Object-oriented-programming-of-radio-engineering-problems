/* ЗАДАНИЕ 3
    Создать одномерный целочисленный массив из N элементов.
    Проинициализировать случайными значениями и вывести на экран.
    Задать пороговое значение на клавиатуре, обнулить все элементы ниже порога.
    Вывести массив на экран.
*/

#include <iostream>
#include <time.h>

const int ARR_SIZE = 10;


int main(){ 

    int arr[ARR_SIZE], threshold;

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        arr[i] = rand() % 11;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    std::cout << "\tInput threshold: ";
    std::cin >> threshold;

    for (size_t i = 0; i < ARR_SIZE; i++){
        if (arr[i] < threshold) arr[i] = 0;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}