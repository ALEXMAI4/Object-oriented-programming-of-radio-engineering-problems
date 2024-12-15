/* ЗАДАНИЕ 3
    Создайте массив из 5 указателей на целые числа. Инициализируйте каждый указатель
    динамически выделенным числом (от 1 до 10).
    Выведите массив чисел (через указатели) на экран.
*/

#include <iostream>

int main(){

    int* arr[5];

    for (size_t i=0; i < 5; i++){
        arr[i] = new int;
        *arr[i] = rand() % 10 + 1;
}
    for (size_t i=0; i < 5; i++) std::cout << "Arr[" << i << "] = " << *arr[i] << "\t";
    for (size_t i=0; i < 5; i++) delete arr[i];

    return 0;
}