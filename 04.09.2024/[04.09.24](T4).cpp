/* ЗАДАНИЕ 4
    Создать одномерный целочисленный массив из N элементов.
    Проинициализировать случайными значениями и вывести на экран.
    Перевернуть элементы внутри массива (имено массива, а не только на выводе).
    Вывести массив на экран.
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

    std::cout << std::endl;

    for (size_t i = 0; i < ARR_SIZE/2; i++){
        int temp = arr[i];
        arr[i] = arr[ARR_SIZE-1-i];
        arr[ARR_SIZE-1-i] = temp;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}