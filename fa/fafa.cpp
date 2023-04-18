#include <iostream>
using namespace std;

class Person{
private:
int age = 20;
public:
void show(){
    cout << this -> age;
}
void dr(){
    age ++;
}
};

int main(){
    Person Egor;

    Egor.show();
}