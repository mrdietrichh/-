#include <iostream>
using namespace std;
// Если функция вернула отрицательное число
// То Это ошибка ввода пользователя
void input_n(int *n) {
    std::cout << "Введите число от 15 до 45:\n";
    std::cin >> *n;

    if (*n < 15 || *n > 45) {
        throw "Некорректный ввод";
    }
}

void del_func(int *n) {
    int m;
    std::cout << "Введите делитель:\n";
    std::cin >> m;
    if (m == 0){
        //throw "Деление на 0";
        throw 0;
    }
    std::cout  << "n / m = " << *n / m << endl;
}

int main()
{

    int *n = new int();
    try {
        input_n(n);
        del_func(n);
    } catch (const char *error){
        delete n;
        cout << error << "\n";
    } catch(...){
        cout << "Ошибка!" << "\n";
    }
    

    return 0;
}