/* ЗАДАНИЕ 9
    Создать двумерный целочисленный массив NxN элементов.
    Проинициализировать случайными значениями и вывести на экран в виде матрицы.
    Определить является ли матрица симметричной.
    Вывести на экран.
*/

#include <iostream>
#include <time.h>

const int ARR_SIZE = 10;


int main(){ 

    int matrix[ARR_SIZE][ARR_SIZE];
    bool is_simetric = true;

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
            matrix[i][j] = rand() % 3;
        }
    }

    if (false){
        for (size_t i = 0; i < ARR_SIZE; i++){
            for (size_t j = 0; j < ARR_SIZE; j++){
                 matrix[i][j] = matrix[j][i];
             }
        }
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
             std::cout <<"\t"<<matrix[i][j];
        }
        std::cout << std::endl;
    }


    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
            if (matrix[i][j] != matrix[j][i]) is_simetric = false;
        }
    }

    if (is_simetric) std::cout <<"Matrix is simetric"<<std::endl;

    return 0;
}