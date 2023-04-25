#include <iostream>
using namespace std;
// Если функция вернула отрицательное число
// То Это ошибка ввода пользователя
int input_n(int *n) {
    std::cout << "Введите число от 15 до 45:\n";
    std::cin >> *n;

    if (*n < 15 || *n > 45) {
        return -1;
    }
    return 0;
}

int del_func(int *n) {
    int m;
    std::cout << "Введите делитель:\n";
    std::cin >> m;
    if (m == 0){
        return -2;
    }
    std::cout  << "n / m = " << *n / m << endl;
    return 0;
}

int main(int argc, char const *argv[])
{

    int *n = new int();
    int return_val = 0;

    return_val = input_n(n);
    if (return_val < 0) {
        delete n;
        std::cout << "Error input!\n";
    } else {
        return_val = del_func(n);
        if (return_val == -2){
            cout << "Деление на ноль!\n";
        }
        std::cout << "Ok!";
    }


    return 0;
}