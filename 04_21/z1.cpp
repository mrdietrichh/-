#include <iostream>
#include <istream>
#include <ostream>
#include <fstream>
#include <sstream>
using namespace std;

void inp_int(){
    int n;

    ifstream test("test.txt");
    test >> n;
    cout << n << "\n";
}

void out_int(){
    int n = 44;

    ofstream test("test.txt", ios::app); // сохраняем прежнее сост файла при помощи app
}

int main(){
    int n;
    cout << "Haha\n";
    // ifstream test("test.txt");

    // test >> n;
    // cout << n << "\n";
    out_int();
}

