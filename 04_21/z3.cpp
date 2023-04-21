#include <iostream>
#include <fstream>
#include <sstream>
#include <ios>
using namespace std;


int main(){
    int v, n;
    string filename;
    bool flag = false;
    while (true){
        cout << "\n1. Чтение файла\n";
        cout << "\n2. Создание копии файла\n";
        cout << "\n3. Добавить в файл строку с консоли\n";
        cout << "\n4. Выйти\n\n";
        cin >> v;
        if (v == 4)
        flag = true;

        else if (v == 1){
            cout << "Введите имя файла:\n";
            cin >> filename;
            ifstream fin(filename);

            if (not fin.good()) {
                cout << "file error\n";
             }

            while (not fin.eof()) {
            string line;
            getline(fin, line);
            cout << line << "\n";
            }
        }

        else if (v == 3){
            cout << "Введите имя файла:\n";
            cin >> filename;
            string str = "";
            ofstream test("test.txt", std::ios::app);
            cout << "Введите строку:\n";
            while (str.length() == 0){
                getline(cin, str);
            }
            test << str;
        }

        else if (v == 2){
            string str;
            ifstream fin("test.txt");
            ofstream fout("test_copy.txt");
            while (not fin.eof()){
                getline(fin, str);
                fout << str << "\n";
            }
        }


        if (flag == true)
          break;
    }
}