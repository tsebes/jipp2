//
// Created by sebiz on 26.10.2021.
//

#include <iostream>
#include <string>

#include "Firstclass.h"

using namespace std;

struct samochod{
    char marka[15];
    char model[15];
    int rok_produkcji;
    char kolor[15];
};


int main(){
    samochod car[4];
    for (int i = 0; i < 4; i++)
    {   cout << "Dodaje " << i+1 << " auto:" << endl;
        cout << "Podaj marke" << endl;
        cin >> car[i].marka;
        cout << "Podaj model" << endl;
        cin >> car[i].model;
        cout << "Podaj rok produkcji" << endl;
        cin >> car[i].rok_produkcji;
        cout << "Podaj kolor" << endl;
        cin >> car[i].kolor;
    }
    cout << "Marka\tModel\trok produkcji\tkolor" << endl;
    cout << "---------------------------------------------------" << endl;
    for (int i = 0; i < 4; i++) {
        cout << car[i].marka << "\t";
        cout << car[i].model << "\t";
        cout << car[i].rok_produkcji << "\t\t";
        cout << car[i].kolor << endl;
    }


    system("pause");
    return 0;
}