#include <iostream>
using namespace std;

void zap(int *mas, int size){
    if (size < 1){
        throw "Массив пустой!";
    } else {
        for (int i = 0; i < size; i++){
          cout << mas[i] << " ";
    }
    }
}

void find(int *mas, int size){
    cout << "Введите элемент:\n";
    int n;
    bool flag = false;
    cin >> n;
    for (int i = 0; i < size; i++){
        if (mas[i] == n){
            cout << "Это элемент под номером " << i << endl;
            flag = true;
        }
    }
    if (flag == false){
        throw "Такого элемента нет!";
    }
}

void del(int *mas, int *size){
    int ind = -1;
    int n1;
    cout << "Введите элемент для удаления:\n";
    cin >> n1;
    for (int i = 0; i < *size; i++){
        if (mas[i] == n1){
            ind = i;
            break;
        }
    }
    if (ind == -1){
        throw "Такого значения в массиве нет!";
    } else {
        for (int i = ind; i < *size; i++){
            mas[i] = mas[i + 1];
        }
        (*size)--;
    }

}

void doboj(int *mas, int *size, int cap){
    int ind = -1;
    int n;
    if (*size <= cap){
        cout << "Введите элемент для добавления:\n";
    cin >> n;
    mas[*size] = n;
    (*size)++;
    } else {
        throw "Выход за границы массива";
    } 
}

void del_i(int *mas, int *size){
    int ind = -1;
    int n1;
    cout << "Введите индекс для удаления:\n";
    cin >> ind;
    if (ind < 0 || *size < 0){
        throw "Такого значения в массиве нет!";
    } else {
        for (int i = ind; i < *size; i++){
            mas[i] = mas[i + 1];
        }
        (*size)--;
    }
}

int main(){
    int mas[10] = {1, 2, 3, 4, 5};
    int size = 5;
    const int cap = 10;
    bool flag = false;
    int n;
    while(true){
        cout << "\nВыберите команду:\n";
        cout << "1. Вывод массива\n";
        cout << "2. Поиск элемента\n";
        cout << "3. Удаление элемента по значению\n";
        cout << "4. Добавление элемента\n";
        cout << "5. Удаление элемента по индексу\n";
        cout << "-1. Выход\n";

        cin >> n;
        try{
        switch(n){
            case 1:
            zap(mas, size);
            break;

            case 2:
            find(mas, size);
            break;

            case 3:
            del(mas, &size);
            break;

            case 4:
            doboj(mas, &size, cap);
            break;

            case 5:
            del_i(mas, &size);
            break;

            case -1:
            flag = true;
            break;
            default:
            cout << "Некорректный ввод\n";
            break;
        }
        } catch (const char *error){
                cout << error << "\n";
        }
        if (flag == true){
            break;
        }
    }
}