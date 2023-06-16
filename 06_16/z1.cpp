#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    int kl = 0;
    cin >> s;
    vector <char> vc(s.begin(), s.end());

    if (vc.size() < 8 || vc.size() > 14){
        cout << "NO";
        return 0;
    } else {
        int cl1 = 0, cl2 = 0, cl3 = 0, cl4 = 0;
        for(const char &el : vc){
            if ((int)el < 33 || (int)el > 126){
                cout << "NO";
                return 0;
            }
        }

        int fin = 0;
        bool flag1 = false, flag2 = false, flag3 = false, flag4 = false;
        for(const char &el : vc){
            if ((int)el > 47 && (int)el < 58){
                cl1++; // цифры
                if (cl1 > 2 && flag1 == false){
                    fin++;
                    flag1 = true;
                }
            } else if ((int)el > 64 && (int)el < 91){
                cl2++; // бб
                if (cl2 > 2 && flag2 == false){
                    fin++;
                    flag2 = true;
                }
            } else if ((int)el > 96 && (int)el < 123){
                cl3++; // мб
                if (cl3 > 2 && flag3 == false){
                    fin++;
                    flag3 = true;
                }
            } else {
                cl4++; //сс
                if (cl4 > 2 && flag4 == false){
                    fin++;
                    flag4 = true;
                }
            }
        }

        if (fin > 2){
            cout << "YES";
            return 0;
        } else {
            cout << "NO";
            return 0;
        }
    }
    
}