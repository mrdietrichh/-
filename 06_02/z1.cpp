#include <iostream>
using namespace std;


int main(){
    int *a = new int[20];
    for(int i = 0; i < 20; i++){
        *(a + i) = 2 * i + 1;
    }
    for(int i = 0; i < 20; i++){
        cout << *(a + i) << " ";
        if ((i + 1) % 5 == 0){
            cout << "\n";
        }
    }
    cout << "\n\n";
    for(int i = 1; i <= 20; i++){
        cout << *(a - i + 20) << " ";
    }
}
