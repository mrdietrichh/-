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
    int i = 0;
    while(i < 20){
        cout << *(a + i) << " ";
        i++;
    }
    cout << "\n\n";
    i = 19;
    while(i >= 0){
        cout << *(a + i) << " ";
        i--;
    }
}
