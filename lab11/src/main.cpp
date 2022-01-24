//
// Created by sebiz on 11.01.2022.
//

#include <iostream>

using namespace std;

/*
template <typename>
class UPtr {
    T *data;

public:
//konstruktor

//dostep do danych

//destruktor

    UPtr(const UPtr&) = delete;

    UPtr operator=(UPtr &) = delete;
    };
*/

template <typename T2>
class SPtr {
    T2 * data;
    int * ilosc;
public:
    //konstruktor
    SPtr(T * data): data(data){
        ilosc = new int;
        *ilosc = 1;
    }

    //destruktor
    ~UPtr(){
        if(*ilosc < 1) {
        delete data;
        delete ilosc;
        }else{
            *ilosc--;
        }
    }

    SPtr(const SPtr&){
        //przepisanie danych
        *ilosc++;
    }


}



int main() {



}