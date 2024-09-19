/* ЗАДАНИЕ 8
    Создать двумерный целочисленный массив NxN элементов.
    Проинициализировать случайными значениями и вывести на экран в виде матрицы.
    Определить номер строки содержащей наибольшую последовательность из нулей.
    Вывести на экран.
*/

#include <iostream>
#include <time.h>

const int ARR_SIZE = 5;


int main(){ 

    int matrix[ARR_SIZE][ARR_SIZE], numberOfLine, indexOfLine;

    srand(time(nullptr));

    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
            matrix[i][j] = rand() % 3;
        }
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
             std::cout <<"\t"<<matrix[i][j];
        }
        std::cout << std::endl;
    }

    indexOfLine = 0;
    numberOfLine = 0;

    for (size_t i = 0; i < ARR_SIZE; i++){
        int numberOfLineTemp = 0;
        for (size_t j = 0; j < ARR_SIZE; j++){
            if (matrix[i][j] == 0) numberOfLineTemp++;
        }
        if (numberOfLineTemp > numberOfLine){
            numberOfLine = numberOfLineTemp;
            indexOfLine = i;
        }
    }

    std::cout <<"\tIndex of line with max zero: "<< indexOfLine << std::endl;

    return 0;
}