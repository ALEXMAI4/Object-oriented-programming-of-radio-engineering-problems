/* ЗАДАНИЕ 1
    Создать одномерный целочисленный массив из N элементов.
    Проинициализировать случайными значениями и вывести на экран.
    Найти максимальный элемент и его индекс в массиве, вывести на экран.
*/

#include <iostream>
#include <time.h>

const int ARR_SIZE = 10;


int main(){ 

    int arr[ARR_SIZE], index_of_max_number;

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        arr[i] = rand() % 11;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    index_of_max_number = 0;

    for (size_t i = 1; i < ARR_SIZE; i++){
        if (arr[index_of_max_number] < arr[i]) index_of_max_number = i;
    }

    std::cout << "\tMax number: " << arr[index_of_max_number] << "\tindex of max number: " << index_of_max_number << std::endl;

    return 0;
}
