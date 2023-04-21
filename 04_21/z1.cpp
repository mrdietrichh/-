#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <sstream>
#include <ios>
using namespace std;

void inp_int(){
    int n;
    // ifstream - intput file stream - поток на чтение
    ifstream test("test.txt");
    test >> n;
    cout << n << "\n";
}

void out_int(){
    int n = 44;
    // ofstream - output file stream - поток на запись

    ofstream test("test.txt", ios::app); // сохраняем прежнее сост файла при помощи app иначе будет перезапись
    test << n << "\n";
    test << "Ку-ку" << "\n";
}

int main(){
    int n;
    cout << "Haha\n";
    // ifstream test("test.txt");

    // test >> n;
    // cout << n << "\n";
    out_int();
}

