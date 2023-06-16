#include <iostream>
#include <cmath>

using namespace std;

void z1(){
    int n;
    cin >> n;
    cout << (n - 1) * 2;
}

void z2(){
    long int sum = 28;
    bool flag = false;
    for (int i = 12; i < 2000000; i++){
        flag = false;
        for (int j = 2; j <= sqrt(i); j++){
            if (i % j == 0){
                flag = true;
                break;
            }
        }
        if (flag == false){
            sum += i;
        }
    }
    cout << sum;
}

void z3(){
    int a = 1;
    for (int i = 1; i <= 500; i++){
        a *= 2;
    }
    cout << a;
}

int main(){
    int n;
    int a = 8;
    int *ptr = &a;
    cout << ptr << endl;
    int &c = *ptr;
    cout << c;
    cin >> n;
    if (n == 1)
    z1();
    else if (n == 2)
    z2();
    else if (n == 3)
    z3();

}