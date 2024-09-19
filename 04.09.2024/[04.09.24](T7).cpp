/* ЗАДАНИЕ 7
    Пользователь вводит N элементов массива с клавиатуры.
    Программа оценивает по следующим критериям:
    - Последовательность знакочередующаяся;
    - Последовательность содержит одинаковые элементы;
    - Последовательность неубывающая.
    Вывести результат на экран.
*/

#include <iostream>

const int ARR_SIZE = 4;


int main(){ 

    int arr[ARR_SIZE];
    bool is_alternating_sign = true;
    bool contains_the_same = false;
    bool is_decreasing = true;

    for (size_t i = 0; i < ARR_SIZE; i++){
        std::cout << "ARR[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << std::endl;

    for (size_t i = 0; i < ARR_SIZE-1; i++){
        if (arr[i] * arr[i+1] > 0) is_alternating_sign = false;
        if (arr[i] < arr[i+1]) is_decreasing = false;
    } 

    for (size_t i = 0; i < ARR_SIZE; i++){
        for (size_t j = 0; j < ARR_SIZE; j++){
            if (arr[i] == arr[j] && i != j){
                contains_the_same = true;
                break;
            }
        }
    }

    if (is_alternating_sign) std::cout << "ARR is alternating sign"  << std::endl;
    if (contains_the_same) std::cout << "ARR contains the same" <<  std::endl;
    if (is_decreasing) std::cout << "ARR is decreasing"  << std::endl;

    return 0;
}