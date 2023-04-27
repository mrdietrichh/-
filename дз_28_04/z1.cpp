#include <iostream>
using namespace std;

template <typename T>
struct el{
    T d;
    el<T> *next;
    el<T> *prev;
};

template <typename T>
class List{
    private:
    el<T> *head;
    el<T> *tail;
    int kol;
    public:
    List(){
        head = tail = nullptr;
        kol = 0;
    }

    void addtohead(T n){
        el<T>* tmp = new el<t>;
        tmp -> d = n;
        tmp -> sled = nullptr;
        if (! head){
            head = tail = tmp;
        } else {
            head -> pr = tmp;
            tmp -> sled = head;
            head = tmp;
        }
        kol++;
    }

    void addtotail(T n){
        el<T>* tmp = new el<t>;
        tmp -> d = n;
        tmp -> sled = nullptr;
        if (! head){
            head = tail = tmp;
        } else {
            tail -> pr = tmp;
            tmp -> sled = tail;
            tail = tmp;
        }
        kol++;
    }

    void delhead(){
        el<T>* tmp = head -> sled;
        
    }
};