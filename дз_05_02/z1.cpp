#include <iostream>
using namespace std;

class Pet{
    protected:
    string name;
    int w;
    int age;
    public:
    Pet(string name, int w, int age): name{name}, w{w}, age{age} {}
    void zv(){
        cout << "Животное издаёт неопределённые звуки";
    }
};

class Cat: virtual protected Pet{
    public:
    Cat (string name, int w, int age): 
    Pet (name, w, age) {}

    void zv(){
        cout << this -> name << " мяукает вам\n";
    }
};

class Dog: protected Pet{
    public:
    Dog (string name, int w, int age):
    Pet (name, w, age) {}
    void zv(){
        cout << this -> name << " радостно лает вам\n";
    }
};

class Parrot: protected Pet{
    public:
    Parrot (string name, int w, int age):
    Pet (name, w, age) {}
    void zv(){
        cout << this -> name << " клекочет 'Привет-Привет'\n";
    } 
};

int main(){
    Cat cat("Васька", 10, 15);
    cat.zv();
    Dog dog("Шарик", 25, 12);
    dog.zv();
    Parrot parrot("Полли", 7, 15);
    parrot.zv();
}