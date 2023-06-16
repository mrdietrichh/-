#include <iostream>
using namespace std;
int sw(int *a){
    for(int i = 0; i < 12; i += 2){
        swap(a[i], a[i + 1]);
    }
    return *a;
}
int main(){
    srand(time(0));
    int *a = new int[12];
    for (int i = 0; i < 12; i++){
        a[i] = rand() % 15 + 1;
        cout << a[i] << " ";
    }
    cout << "\n";
    sw(a);
    for (int i = 0; i < 12; i++){
        cout << a[i] << " ";
    }
}