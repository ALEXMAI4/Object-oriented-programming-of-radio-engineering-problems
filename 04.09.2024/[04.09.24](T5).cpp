/* ЗАДАНИЕ 5
    Создать одномерный целочисленный массив из N элементов.
    Проинициализировать случайными значениями и вывести на экран.
    Написать сортировку для массива, отсортировать.
    Вывести массив на экран.
*/

#include <iostream>
#include <time.h>

const int ARR_SIZE = 10;


int main(){ 

    int arr[ARR_SIZE];
    bool arr_is_sorted = false;

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        arr[i] = rand() % 11;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    std::cout << std::endl;

    for (size_t i = 0; i < ARR_SIZE; i++){
        arr_is_sorted = true;
        for (size_t j = 0; j < ARR_SIZE-1-i; j++){
            if ((arr[j] > arr[j+1])){
                arr_is_sorted = false;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if (arr_is_sorted) break;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}