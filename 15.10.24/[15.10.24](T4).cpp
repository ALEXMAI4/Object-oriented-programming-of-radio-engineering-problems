/* ЗАДАНИЕ 4
    Реализуйте программу, которая создает динамический массив размером 3х3.
    Заполните матрицу с клавиатуры и выведите на экран.
*/

#include <iostream>

int main(){

    int** arr = new int*[3];
    for (size_t i=0; i < 3; i++) arr[i] = new int[3];

    for (size_t i=0; i < 3; i++){
        for (size_t j=0; j < 3; j++){
            std::cout << "Arr[" << i << "][" << j << "] = ";
            std::cin >> arr[i][j];
        }
    }

    for (size_t i=0; i < 3; i++){
        for (size_t j=0; j < 3; j++) std::cout << arr[i][j] << "\t";
        std::cout << std::endl;
    }

    for (size_t i=0; i < 3; i++) delete[] arr[i];
    delete[] arr;

    return 0;
}