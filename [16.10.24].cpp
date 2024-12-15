#include <iostream>
#include <string>
#include <cmath>

double pow(double a, int b){
    if (b < 0) return pow(1/a, -b);

    double result = 1;
    for (size_t i = 0; i < b; i++) result = a * result;
    return result;
}

void swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

bool is_it_prime_number(int number){
    for(int i = 2; i <= number / i; i++){
        if(number % i == 0) return false;
    }
    return true;
}

void prime_numbers(){
    int a, b;
    std::cout << "Input left border: ";
    std::cin >> a;
    std::cout << "Input right border: ";
    std::cin >> b;

    int prime;
    for(size_t i = a; i <= b; i++){
        if (is_it_prime_number(i)) std::cout << i << "\t";
    }
}

void sort_1D_array(int size, int* arr){
    for (;;){
        bool is_it_sort = true;
        for (size_t i = 0; i < size-1; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                is_it_sort = false;
            }
        }
        if (is_it_sort) break;
    }
}

void random_matrix(){

    int start = 1;
    int end = 25;
    int midle = (end - start)/2;
    int spread = (end + start)/2;

    int rows, cols;

    std::cout << "Input number of rows: ";
    std::cin >> rows;
    std::cout << "Input  number of columns: ";
    std::cin >> cols;

    int** matrix = new int*[rows];
    

    for (size_t i = 0; i < rows; i++) matrix[i] = new int [cols];


    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++)
            matrix[i][j] = rand()%midle + spread;
    }

    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }

    int* temp_matrix = new int[rows*cols];
    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++)
            temp_matrix[i * cols + j] = matrix[i][j];
    }

    sort_1D_array(rows*cols, temp_matrix);

    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++)
            matrix[i][j] = temp_matrix[i * cols + j];
    }

    delete[] temp_matrix;

    std::cout << std::endl;

    for (size_t i = 0; i < rows; i++){
        for (size_t j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << std::endl;
    }



    for (size_t i = 0; i < cols; i++) delete[] matrix[i];
    delete matrix;
}

struct Student{
    char name[100];
    int age;
    float avg_score;
};

void who_is_this_student(Student human){
    std::cout << "Name: " << human.name << std::endl;
    std::cout << "Age: " << human.age << std::endl;
    std::cout << "Average score: " << human.avg_score << std::endl;
}

struct Rectangle{
    double lenght;
    double width;
};

void change_size_rectangle(Rectangle &rect, double new_lenght, double new_width){
    rect.lenght = new_lenght;
    rect.width = new_width;
}

struct Book{
    std::string name;
    std::string author;
    int year;
};

int search_book(Book * arr, int number_book, std::string name){
    for (size_t i = 0; i < number_book; i++){
        if ((arr[i]).name == name) return i;
    }
    return -1;
}

struct Point3D{
    double x, y, z;
};

double distance(const Point3D& A, const Point3D& B){
    return pow((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y)+(A.z-B.z)*(A.z-B.z), 0.5);
}

void sortStudents(Student* s, int size){
    bool isItSort = false;
    while(!isItSort){
        isItSort = true;
        for(size_t i = 0; i<size-1; i++){
            if(s[i].avg_score < s[i+1].avg_score){
                Student tmp = s[i];
                s[i] = s[i+1];
                s[i+1] = tmp;
                isItSort = false;
            }
        }
    }
}


int main(){

    Point3D A{0,0,0}, B{1, 1, 1};
    std::cout << "Расстояние от A до B: " << distance(A, B) << std::endl << std::endl;

    Student S[3] = {{"First", 18, 4.7}, {"Second", 20, 4.3}, {"Third", 19, 4.9}};
    sortStudents(S, 3);
    for(size_t i=0; i<3; i++) std::cout << S[i].name << std::endl << std::endl;

/*
    int a = 1;
    int b = 3;

    std::cout << "pow(a, b): " << pow(0.2, -5) << std::endl << std::endl;

    std::cout << "befor: a = " << a << "\tb = " << b << std::endl;
    swap(a, b);
    std::cout << "after: a = " << a << "\tb = " << b << std::endl << std::endl;

    prime_numbers();

    std::cout << std::endl;

    random_matrix();

    std::cout << std::endl;

    Student Bashmakov{"Bashmakov Kirill Konstantinovich", 23, 9.9};
    who_is_this_student(Bashmakov);

    std::cout << std::endl;

    Rectangle test{1.2, 4.5};
    std::cout << "Lenght of rectangle: " << test.lenght << std::endl;
    std::cout << "Width of rectangle: " << test.width << std::endl;
    change_size_rectangle(test, 3.2, 4.2);
    std::cout << "Lenght of rectangle: " << test.lenght << std::endl;
    std::cout << "Width of rectangle: " << test.width << std::endl;

    std::cout << std::endl;

    Book books[3] = {{"Name1", "Author1", 1945}, {"Name2", "Author2", 1936}, {"Name3", "Author3", 1932}};
    std::cout << search_book(books, 3, "Name3") << std::endl;
*/
    

    return 0;
}