//
// Created by sebiz on 20.01.2022.
//

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <fstream>
#include "../include/pole.h"
#include "../include/inne.h"
#include "../include/bomba.h"
#include "../include/wyniki.h"
#include "../include/porazka.h"
#include "../include/wygrana.h"

using namespace std;


int main(int argc, char* argv[]) {

    //tryb adminmode --------------------------------------------------------------------

    bool adminmode = false;
    string parametr;
    if (argc > 1) {
        parametr = argv[1];
        if (parametr == "admin") {
            adminmode = true;
        }
    }

    //pobieranie danych do stworzenia planszy--------------------------------------------

    int const szerokosc = 15, wysokosc = 20;
    int iloscbomb;

    cout << "Podaj ilosc bomb: " << endl;
    do {
        cin >> iloscbomb;
        dobradana(&iloscbomb);
        if (iloscbomb < 1 || iloscbomb > szerokosc * wysokosc / 5) {
            cout << "Podano zla ilosc bomb. Podaj wartosc wieksza od 1 oraz mniejsza od ";
            if(szerokosc * wysokosc / 5 < 100){
                cout << szerokosc * wysokosc / 5 << endl;
            }
            else {
                cout << 100 << endl;
            }
        }
    } while (iloscbomb < 1 || iloscbomb > szerokosc * wysokosc / 5);

    //losowanie miejsc w ktorych zostana postawione bomby--------------------------------

    srand(time(NULL));
    vector<int> bombax;
    vector<int> bombay;
    bool norepeat;
    for(int i = 0; i < iloscbomb; ++i){
        do{
            bombax.push_back(rand() % szerokosc);
            bombay.push_back(rand() % wysokosc);
            norepeat = true;
            for(int j = 0; j<i; ++j){
                if(bombax.at(j)==bombax.at(i)){
                    if(bombay.at(j)==bombay.at(i)){
                        bombax.pop_back();
                        bombay.pop_back();
                        norepeat = false;
                        j=i;
                    }
                }
            }
        }while(norepeat == false);
    }


    //tworzenie planszy --------------------------------------------------------------------

    pole plansza[szerokosc][wysokosc];
    for (int i = 0; i < wysokosc; ++i) {
        for (int j = 0; j < szerokosc; ++j) {
        plansza[j][i].ustawxy(j, i);
        }
    }

    //wstawianie bomb -----------------------------------------------------------------------

    bomba listabomb[100];

    for(int i = iloscbomb - 1; i >= 0; --i){
        plansza[bombax.at(i)][bombay.at(i)].ustawwartosc();
        listabomb[iloscbomb-1-i].ustawxy(bombax.at(i),bombay.at(i));
        listabomb[iloscbomb-1-i].ustawnumer(iloscbomb-i);
        bombax.pop_back();
        bombay.pop_back();
    }


    //ustawianie wartosci niebedacych bombami------------------------------------------------

    for (int i = 0; i < wysokosc; ++i) {
        for (int j = 0; j < szerokosc; ++j) {
            if(plansza[j][i].podajwartosc() == 9){

                if(i < wysokosc - 1) {
                    if(plansza[j][i + 1].podajwartosc() != 9) {
                        ++plansza[j][i + 1];
                    }
                }

                if(j < szerokosc - 1) {
                    if(plansza[j + 1][i].podajwartosc() != 9) {
                        ++plansza[j + 1][i];
                    }
                }

                if(i > 0) {
                    if(plansza[j][i - 1].podajwartosc() != 9){
                        ++plansza[j][i - 1];
                    }
                }

                if(j > 0) {
                    if(plansza[j - 1][i].podajwartosc() != 9){
                        ++plansza[j - 1][i];
                    }
                }

                if(i < wysokosc - 1 && j < szerokosc - 1) {
                    if(plansza[j + 1][i + 1].podajwartosc() != 9) {
                        ++plansza[j + 1][i + 1];
                    }
                }

                if(i < wysokosc - 1 && j > 0) {
                    if(plansza[j - 1][i + 1].podajwartosc() != 9) {
                        ++plansza[j - 1][i + 1];
                    }
                }

                if(i > 0 && j < szerokosc - 1) {
                    if(plansza[j + 1][i - 1].podajwartosc() != 9) {
                        ++plansza[j + 1][i - 1];
                    }
                }

                if(i > 0 && j > 0) {
                    if(plansza[j - 1][i - 1].podajwartosc() != 9) {
                        ++plansza[j - 1][i - 1];
                    }
                }
            }
        }
    }

    // interakcja gracza z gra ----------------------------------------------------------

    int iloscdosprawdzenia, wybor;
    iloscdosprawdzenia = zwrociloscdosprawdzenia(szerokosc, wysokosc, plansza);
    bool przegrana = false, automatycznie = false;
    do {
        wyswietlplansze(szerokosc, wysokosc, plansza);
        przegrana = sprawdzkoniec(szerokosc, wysokosc, plansza);
        if(przegrana == false) {
            wybor = wyswietlinterfejs(adminmode);
            if(wybor < 0){
                switch (wybor){
                    case  -1:
                        wyswietlplansze(szerokosc, wysokosc, plansza, adminmode);
                        break;
                    case -2:
                        wyswietlbomby(szerokosc, wysokosc, iloscbomb, listabomb);
                        break;
                    case -3:
                        wyswietlwszystkoopolu(szerokosc, wysokosc, plansza);
                        break;
                }
            }
            else if(wybor < szerokosc * wysokosc){
                sprawdzanie(wybor, szerokosc, wysokosc, plansza, &iloscdosprawdzenia, automatycznie);
            }
            else{
                cout << "Podano za wysoka wartosc, takie pole nie istnieje" << endl;
            };
        }
    }while(iloscdosprawdzenia > 0 && przegrana == false);

    // koniec gry ----------------------------------------------------------------------------

    cout << endl << endl;

    wygrana w(szerokosc, wysokosc, iloscbomb);
    porazka p(iloscdosprawdzenia, szerokosc, wysokosc, iloscbomb);

    wyniki* wsk;

    if(przegrana == true){
        wsk = &p;
    }
    else{
        wsk = &w;
    }

    wsk -> wyswietl();
    system("pause");

    // zapis wyniku do pliku dane.txt -------------------------------------------------------

    string nickname;
    cout << "Podaj nick: " << endl;
    cin >> nickname;


    ofstream output("gracze", ios::app);
    if(output.is_open()) {
        output << nickname << ": ";
        if(przegrana == true){
            output << " Przegrana, zabraklo " << iloscdosprawdzenia << " pol do sprawdzenia" << endl;
            output << " Szerokosc planszy: " << szerokosc << " ,wysokosc planszy: " << wysokosc << " ,ilosc bomb " << iloscbomb << endl;
        }
        else {
            output << " Wygrana" << endl;
            output << " Szerokosc planszy: " << szerokosc << " ,wysokosc planszy: " << wysokosc << " ,ilosc bomb " << iloscbomb << endl;
        }
        output.close();
    } else {
        cout << "Error on opening file" << endl;
        exit(1);
    }

    cout << "Lista wszystkich graczy: " << endl;

    ifstream input("gracze");
    if(input.is_open()) {
        string line;
        while(!input.eof()) {
            getline(input, line);
            cout << line << endl;
        }
        input.close();
    } else {
        cout << "Error on opening file" << endl;
        exit(1);
    }
}