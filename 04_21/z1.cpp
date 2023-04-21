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

void read_f(const string &filename){
    ifstream fin(filename);
    int n;
    string str;

    string line;
    getline(fin, line);
    cout << line << "\n";

    fin >> n;
    cout << n << "\n";

    getline(fin, str);
    cout << str << "\n";
    getline(fin, str);
    cout << str << "\n";
}

string in_line(){
    string line;
    getline(cin, line);
    return line;
}

void pri_all(const string &filename){
    ifstream fin(filename);

    if (not fin.good()){
        cout << "ошибка стоп 00000000000000000000";
        return;
    }
    while (not fin.eof()){
        string line;
        getline(fin, line);
        cout << line << "\n";
    }

}

int main(){
    int n;
    // ifstream test("test.txt");

    // test >> n;
    // cout << n << "\n";
    //read_f("test.txt");
    cout << "File:\n";
    pri_all(in_line());
}

