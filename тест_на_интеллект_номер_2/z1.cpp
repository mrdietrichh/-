#include <iostream>
using namespace std;

int f1(int *mas, int kol){
    int sum = 0;
    for (int i = 0; i < kol; i++){
        sum += mas[i];
    }
    return sum;
}

int f2(int *mas, int kol){
    int sum = 0;
    int ma = mas[0];
    for (int i = 0; i < kol; i++){
        max(ma, mas[i]);
    }
    return ma;
}

int f3(int *mas1, int *mas2, int kol1, int kol2){
    int *mas3 = new int[kol1 + kol2];
    for (int i = 0; i < kol1; i++){
        mas3[i] = mas1[i];
    }
    for (int i = kol1; i < kol2; i++){
        mas3[i] = mas1[i - kol1];
    }
    return *mas3;
}

int f4(int **mat, int kol1, int kol2){
    int sum = 0;
    for (int i = 0; i < kol1; i++){
        for (int j = 0; j < kol2; j++){
            sum += mat[i][j];
        }
    }
    return sum;
}

int f5(int *mas, int kol){
    int sum = 0;
    int ma = mas[0];
    for (int i = 0; i < kol; i++){
        sum += mas[i];
    }
    return sum / kol;
}

int main(){
    srand(time(0));
    int mas1[6];
    int mas2[8];

    for (int i = 0; i < 6; i++){
        mas1[i] = rand() % 10 + 1;
    }

    for (int i = 0; i < 8; i++){
        mas2[i] = rand() % 10 + 1;
    }
    int n;
    cin >> n;
    cout << "\n";
    switch(n){
        case 1:
        cout << f1(mas1, 6);
        break;
        case 2:
        cout << f2(mas1, 6);
        break;
        case 3:
        cout << f3(mas1, mas2, 6, 8);
        break;
    }
}