/* ЗАДАНИЕ 10
    Создать двумерный целочисленный массив NxN элементов.
    Проинициализировать возрастающими значениями от левого верхнего угла по спирали к центру.
    Вывести на экран.
*/

#include <iostream>

const int ARR_SIZE = 10;

int main(){

    int matrix[ARR_SIZE][ARR_SIZE], number;

    number = 0;
    for (int iteration = 0; iteration < ARR_SIZE; iteration++){
        int i, j;
        i = iteration;
        for (j = iteration; j < ARR_SIZE-iteration; j++) matrix[i][j] = number++;
        for (i = iteration+1; i < ARR_SIZE-iteration; i++) matrix[i][j-1] = number++;
        for (j = ARR_SIZE-2-iteration; j > iteration-1; j--) matrix[i-1][j] = number++;
        for (i = ARR_SIZE-2-iteration; i > iteration; i--) matrix[i][j+1] = number++;
    }

    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
             std::cout <<"\t"<<matrix[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}