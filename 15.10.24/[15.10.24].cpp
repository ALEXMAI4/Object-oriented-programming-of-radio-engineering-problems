/* ЗАДАНИЕ 1
    Указатели:
    1. Напишите программу, которая создает целое число, затем создает указатель на это число
    с помощью указателя поменяйте содержимое целого числа и выведите его на экран.

    2. Напишите программу, которая динамически выделяет память для массива из 5 целых чисел,
    заполните массив с клавиатуры, а затем выведите его элементы. После завершения работы
    освободите выделенную память.

    3. Создайте массив из 5 указателей на целые числа. Инициализируйте каждый указатель     
    динамически выделенным числом (от 1 до 10).
    Выведите массив чисел (через указатели) на экран.

    4. Реализуйте программу, которая создает массив размером 3х3.
    Заполните матрицу с клавиатуры и выведите на экран.

    5. Напишите программу, которая создает указатель на целое число, затем указатель на
    указатель. Выведите число. Используя указатель на указатель, измените число и выведите
    его снова.

Функции и структуры.
Объявление функции.
<return_tupe> <name> (<param1>, <param2>, ...)
    paramN: <type> <name>

Сигнатуры функции

std::cout << std::endl;

Операция взятия адреса - &
int x = 10;
std::cout << x << std::endl;
std::cout << &x << std::endl;

*/

/*#include <iostream>

int main(){

    int x = 10;
    std::cout << "sizeof(int): " << sizeof(x) << std::endl;
    std::cout << "X val: " << x << std::endl;
    std::cout << "X adr: " << &x << std::endl;

    int* y = &x;
    std::cout << "sizeof(int*): " << sizeof(y) << std::endl;
    std::cout << "Y val: " << y << std::endl;
    std::cout << "Value under Y: " << *y << std::endl;
    std::cout << "Y adr: " << &y << std::endl;

    int** z = &y;
    std::cout << "sizeof(int**): " << sizeof(y) << std::endl;
    std::cout << "Z val: " << z << std::endl;
    std::cout << "Value under Z: " << *z << std::endl;
    std::cout << "Value under value under Z: " << **z << std::endl;
    std::cout << "Z adr: " << &z << std::endl;


    return 0;
}8

1. Напишитеследующие функции возвращающие результат операции для двух чисел:
    сумма, разность, произведение, отношение.

2. Напишите функцию которая принимает указатель на целое число и увеличивает значение этого числа на 10.

3. Напишите функцию для подсчета факториала.

4. Напишите функцию pow(double a, int b), которая возвращает a^b

5. Напишите функцию swap, которая меняет местами значения двух целочисленных переменны.

6. Напишите программу которая запрашивает у пользователя границы диапазона. А затем выводите все простые числа в диапазоне.

7. Напишите программу которая создает матрицу случайных чисел, запрашиваемого пользователем размера. Выводит матрицу. Сортирует значения по всей матрице

8. Создайте структуру Student, которая содержит поля : имя, возраст, средний балл. Напишите функцю которая принимает обьект структуры и выводит на экран.

9. Создайте структуру Rectangle с полями длины и ширены. Напишите функцию позволяющюю задать новые значения длины и ширены у такой структуры.

10. Создать структуру Book содержащей название, автора и год издания. С

*/


#include <iostream>


double sum(double num1, double num2);
double diff(double num1, double num2);
double mult(double num1, double num2);
double div(double num1, double num2);
void plus10(double* num);
int fact(int Num);


int main(){

    double x = 10;
    double* x_ptr = &x;

    std::cout << "Сумма: "<< sum(12.5, 32.5) << std::endl;
    std::cout << "Разность: "<< diff(12.5, 32.5) << std::endl;
    std::cout << "Произведение: "<< mult(12.5, 32.5) << std::endl;
    std::cout << "Отношение: "<< div(12.5, 32.5) << std::endl;
    std::cout << "Плюс 10: "<< plus10(x_ptr) << std::endl;
    std::cout << "Факториал: "<< fact(10) << std::endl;




    return 0;
}

double sum(double num1, double num2){
    return num1 + num2;
}

double diff(double num1, double num2){
    return num1 - num2;
}

double mult(double num1, double num2){
    return num1 * num2;
}

double div(double num1, double num2){
    return num1 / num2;
}

void plus10(double* num){
    return (*num) + 10;
}

int fact(int Num){
    int factorial = Num;
    if (Num==1) return factorial;
    else{
        return factorial = factorial * fact(Num-1);
    }
}














