#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
string name;
public:
Animal(string name): name(name) {
    cout << "animal " << name << " was born\n";
}
Animal() : Animal("Pet") {}

virtual void voice(){ // функцию можно переписать
    cout << "judaism intensifies\n";
}

void sayhi(string mess){
    cout << "You say " << mess << " to " << this->name << "\n";
}

~Animal() {
    cout << "Таджик забрал " << name << " и пустил на шаурму\n";
    cout << "В качестве компенсации вам выдаётся две в сырном\n";
}
};

class Dog : public Animal { // наследуем
public:
void voice(){
    cout << "Gav Gav!\n";
}

Dog(string name): Animal(name){
    cout << "Dog " << name << " was born\n";
}
Dog() : Animal(){};
~Dog() {
    cout << "Собаку съели киргизы с местной стройки\n";
}
};

class Cat : public Animal { // наследуем
public:
void voice(){
    cout << "Meow Meow!\n";
}

Cat(string name): Animal(name){
    cout << "Dog " << name << " was born\n";
}
Cat() : Animal(){};
~Cat() {
    cout << "Кота съели узбеки с местной стройки\n";
}
};

class PrimeDog: public Dog{
private:
string por;
int price;
public:
PrimeDog(string por, int price): por(por), price(price) {
    cout << "Собака породы " << por << " рождена";
    cout << "Собака породы " << por << " оценивается в " << price;
}


void showpr(){
    cout << "Цена собаки " << price << endl;
}
void showpor(){
    cout << "Порода собаки " << por << endl;
}
};

// void saysome(Animal &animal){
// animal.voice();
// animal.sayhi("hi");
// }

int main(){
    Animal Tod;
    Tod.voice();
    Tod.sayhi("Hi");

    Dog Ball("Шарик");
    Ball.voice();
    Ball.sayhi("Hi");

    Dog some_dog("Шарик");
    // //Cat some_cat("Киса");

    // saysome(some_dog);
    PrimeDog sob("terer", 20);
    sob.showpr();
    sob.showpor();
}