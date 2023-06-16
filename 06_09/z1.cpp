#include <iostream>
using namespace std;

void ch(string *mas, int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (mas[j].size() > mas[j + 1].size()){
                swap(mas[j], mas[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string* mas = new string[n];
    for (int i = 0; i < n; i++){
        cin >> mas[i];
    }
    ch(mas, n);
    for (int i = 0; i < n; i++){
        cout << mas[i] << "\n";
    }
}