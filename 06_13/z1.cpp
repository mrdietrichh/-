#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1;
    int kol = 0;
    getline(cin, s1);
    string s2 = "eyuioaEYUIOA";
    for (char c : s1){
        //cout << s2.find(c) << " ";
        if (s2.find(c) != string::npos){ // верхняя граница, запредельное число; -1 - нижняя граница
            kol++;
        }
    }
    cout << kol;
}
