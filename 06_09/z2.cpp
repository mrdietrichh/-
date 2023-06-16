#include <iostream>
using namespace std;

void ch(string *mas, int n){
    int kol = 0;
    for (int i = 0; i < n; i++){
        string s;
        if (mas[i].size() != 0 ){
            int z = i + 1 - kol;
            s += to_string(z) + ": " + mas[i];
            mas[i] = s;
        } else {
            kol--;
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