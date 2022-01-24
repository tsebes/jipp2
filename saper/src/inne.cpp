//
// Created by sebiz on 21.01.2022.
//

#include "inne.h"


int wyswietlinterfejs(bool adminmode){
    int wybor;
    if(adminmode == false){
        cout << "wybierz ktore pole chcesz sprawdzic: " << endl;
    }
    else{
        cout << "wybierz ktore pole chcesz sprawdzic, wpisz liczbe ujemna dla wyswietlenia interfejsu admina: " << endl;
    }
        cin >> wybor;
        dobradana(&wybor);
        if(wybor < 0){
            if(adminmode == false){
                do{
                    cout << "nie posiadasz dostepu do interfejsu admina" << endl;
                    cin >> wybor;
                    dobradana(&wybor);
                }while(wybor < 0);
            }
            else{
                do{
                cout << "Wybierz akcje ktora chcesz zrobic (lub wpisz liczbe nieujemna by sprawdzic to pole):" << endl;
                cout << "-1 wyswietl plansze wyswietlajac bomby" << endl;
                cout << "-2 wyswietl wszystkie informacje bomb" << endl;
                cout << "-3 wyswietl wszystkie informacje pola" << endl;
                cin >> wybor;
                dobradana(&wybor);
                if(wybor < -3){
                    cout << "podano zla wartosc, wybierz znowu" << endl;
                }
                }while(wybor < -3);
            }
        }
    return wybor;
}

//Funkcje zaprzyjazniona ---------------------------------------------------------------------------

void wyswietlwszystko(pole& obiekt){
    cout << "x = " << obiekt.x << ", y = " << obiekt.y;
    if(obiekt.wartosc == 9){
        cout << ", jest tu bomba" << endl;
    }
    else{
        cout << ", w okolicy jest " << obiekt.wartosc << " bomb" << endl;
    }
}


