/* ЗАДАНИЕ 6
    Создать одномерный целочисленный массив из N элементов.
    Проинициализировать случайными значениями и вывести на экран.
    Посчитать мат.ожидание и стандартное отклонение элементов.
    Вывести на экран.
*/

#include <iostream>
#include <time.h>
#include <math.h>

const int ARR_SIZE = 1000;


int main(){ 

    int arr[ARR_SIZE];
    float MX, sigma;

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        arr[i] = rand() % 11;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = " << arr[i] << std::endl;
    }

    std::cout << std::endl;

    MX = 0;
    for (size_t i = 0; i < ARR_SIZE; i++) MX += arr[i];

    MX /= ARR_SIZE;

    sigma = 0;
    for (size_t i = 0; i < ARR_SIZE; i++) sigma += (arr[i]-MX) * (arr[i]-MX);

    sigma /= ARR_SIZE;
    
    std::cout <<"MX = "<<MX<<"\tOtklonenie = "<<sqrt(sigma)<< std::endl;

    return 0;
}