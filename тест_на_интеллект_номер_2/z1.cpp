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
        ma = max(ma, mas[i]);
    }
    return ma;
}

void f3(int *mas1, int *mas2, int kol1, int kol2){
    int *mas3 = new int[kol1 + kol2];
    for (int i = 0; i < kol1; i++){
        mas3[i] = mas1[i];
    }
    for (int i = 0; i < kol2; i++){
        mas3[i + kol1] = mas2[i];
    }
    
    for (int i = 0; i < kol1 + kol2; i++){
        cout << mas3[i] << " ";
    }
    delete[] mas3;
}

int f4(int mat[5][4], int kol1, int kol2){
    int sum = 0;
    for (int i = 0; i < kol1; i++){
        for (int j = 0; j < kol2; j++){
            sum += mat[i][j];
        }
    }
    return sum;
}

double f5(int *mas, int kol){
    double sum = 0;
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
        cout << mas1[i] << " ";
    }

    cout << "\n";

    for (int i = 0; i < 8; i++){
        mas2[i] = rand() % 10 + 1;
        cout << mas2[i] << " ";
    }

    cout << "\n\n";

    int mat[5][4];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            mat[i][j] = rand() % 10 + 1;
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\n";
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
        f3(mas1, mas2, 6, 8);
        break;
        case 4:
        cout << f4(mat, 5, 4);
        break;
        case 5:
        cout << f5(mas1, 6);
        break;
    }
}