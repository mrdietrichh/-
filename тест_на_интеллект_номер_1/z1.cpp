#include <iostream>
using namespace std;

class Data{
    public: 
    void insert(){

    }

    void erase(){
        
    }
    // Data operator = (Test z1){
    //     a1 = z1.a1;
    //     return *this;
    // }
};

class Sale: public Data{
    protected:
    int sum;
    string dat;
    string name;
    public:
    Sale() {}
    Sale(int sum, string dat, string name) {
    }
    // void set_dat(string dat1){
    //     dat = dat1;
    // }
    // void set_nam(string nam1){
    //     name = nam1;
    // }
    // void set_sum(int sum1){
    //     sum = sum1;
    // }
};

class DataArray: protected Sale{
    protected:
    string *im = new string;
    string *da = new string;
    int *su = new int;
    int kol = 1;
    int i = 0;
    public:
    DataArray() {}
    DataArray(int sum, string dat, string name):  
    Sale(sum, dat, name) {
        im[i] = name;
        da[i] = dat;
        su[i] = sum;
        i++;
        kol++;
    }
    void insert(){
        int ind;
        int el;
        cout << "Введите позицию для вставки и значение, которое хотите вставить:\n";
        cin >> ind;
        cin >> el;
        kol++;
        for (int i = ind + 1; i < kol; i++){
            su[i] = su[i + 1];
        }
        su[ind] = el;
    }

void erase(){
        int ind;
        int el;
        cout << "Введите позицию для удаления и значение, которое хотите удалить:\n";
        cin >> ind;
        cin >> el;
        kol--;
        for (int i = ind + 1; i < kol; i++){
            su[i] = su[i - 1];
        }
        su[ind] = el;
    }

    void get_su(){
        for (int i = 0; i < kol; i++){
            cout << su << " ";
        }
    }
    
};

int main(){
    int sum;
    string dat;
    string name;
    DataArray sus;
    for (int i = 0; i < 3; i++){
        cin >> dat;
        cin >> name;
        cin >> sum;
        sus(sum, dat, name);
    }
}