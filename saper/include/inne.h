//
// Created by sebiz on 21.01.2022.
//

#ifndef SAPER_INNE_H
#define SAPER_INNE_H

#include <iostream>
#include "pole.h"

using namespace std;

/**
 * sprawdza czy podana przez uzytkownika zmienna jest odpowiedniego typu
 * @tparam typ1 typ oczekiwany przez uzytkownika
 * @param zmienna zmienna ktora sprawdzamy czy dostala dobry typ
 */
template <typename typ1>
void dobradana(typ1 *zmienna){
    while(cin.fail())
    {
        cout << "Wprowadziles bledne dane!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Wprowadz dane ponownie:" << endl;
        cin >> *zmienna;
    }
}

/**
 * funkcja zwraca ilosc pol planszy ktore nie zostaly jeszcze sprawdzone
 * @tparam typ2 przyjmuje tablice dwuwymiarowa typu pole
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param plansza plansza na ktorej rozgrywa sie gra
 * @return zwrocona zostaje ilosc pol ktore trzeba jeszcze sprawdzic by wygrac
 */
template <typename typ2>
int zwrociloscdosprawdzenia(int szerokosc, int wysokosc, typ2 plansza) {
    int ilosc = 0;
    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            if (plansza[j][i].podajstan() == false) {
                if (plansza[j][i].podajwartosc() != 9) {
                    ilosc++;
                }
            }
        }
    }
    return ilosc;
}

/**
 * funkcja przeciazona wyswietla plansze na ktorej rozgrywa sie gra na ekran
 * @tparam typ3 przyjmuje tablice dwuwymiarowa typu pole
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param plansza plansza na ktorej rozgrywa sie gra
 */
template <typename typ3>
void wyswietlplansze(int szerokosc, int wysokosc, typ3 plansza){
    cout << endl << endl;
    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            if(plansza[j][i].podajstan() == false){
                cout << "[" << i * szerokosc + j;
                if(i * szerokosc + j<10) cout << " ";
                if(i * szerokosc + j<100) cout << " ";
                cout << "]  ";
            }
            else{
                cout << "< ";
                if(plansza[j][i].podajwartosc() == 9){
                    cout << "X";
                }
                else{
                    cout << plansza[j][i].podajwartosc();
                }
                cout << " >  ";
            }
        }
        cout << endl;
    }
}

/**
 * funkcja przeciazona wyswietla plansze na ktorej rozgrywa sie gra na ekran wyswietlajac takze pozycje bomb
 * @tparam typ4 przyjmuje tablice dwuwymiarowa typu pole
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param plansza plansza na ktorej rozgrywa sie gra
 * @param adminmode informacja czy adminmode jest wlaczony
 */
template <typename typ4>
void wyswietlplansze(int szerokosc, int wysokosc, typ4 plansza, bool adminmode){
    cout << endl << endl;
    if(adminmode == false){
        cout << "Nie masz uprawnien" << endl;
    }
    else {
        for (int i = 0; i < wysokosc; i++) {
            for (int j = 0; j < szerokosc; j++) {
                if (plansza[j][i].podajstan() == false) {
                    if (plansza[j][i].podajwartosc() == 9) {
                        cout << "[-X-";
                    } else {
                        cout << "[" << i * szerokosc + j;
                        if (i * szerokosc + j < 10) cout << " ";
                        if (i * szerokosc + j < 100) cout << " ";
                    }
                    cout << "]  ";
                } else {
                    cout << "< ";
                    if (plansza[j][i].podajwartosc() == 9) {
                        cout << "X";
                    } else {
                        cout << plansza[j][i].podajwartosc();
                    }
                    cout << " >  ";
                }
            }
            cout << endl;
        }
    }
}

/**
 * funkcja sprawdza czy gra sie nie skonczyla przez sprawdzenie bomby
 * @tparam typ5 przyjmuje tablice dwuwymiarowa typu pole
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param plansza plansza na ktorej rozgrywa sie gra
 * @return zwraca informacje czy gra sie zakonczyla (true) lub nie (false)
 */
template <typename typ5>
bool sprawdzkoniec(int szerokosc, int wysokosc, typ5 plansza){
    bool koniec = false;
    for (int i = 0; i < wysokosc; i++) {
        for (int j = 0; j < szerokosc; j++) {
            if(plansza[j][i].podajwartosc() == 9 && plansza[j][i].podajstan() == true){
                koniec = true;
            }
        }
    }
    return koniec;
}

/**
 * wyswietla wszystkie informacje o polu wybranym przez gracza w funkcji
 * @tparam typ6 przyjmuje tablice dwuwymiarowa typu pole
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param plansza plansza na ktorej rozgrywa sie gra
 */
template <typename typ6>
void wyswietlwszystkoopolu(int szerokosc, int wysokosc, typ6 plansza){
    int wybor;
    cout << endl << endl;
    cout << "Podaj wartosc pola ktore chcesz sprawdzic:" << endl;
    do {
        cin >> wybor;
        dobradana(&wybor);
    }while(wybor < 0 && wybor >= szerokosc * wysokosc);
    wyswietlwszystko(plansza[wybor%szerokosc][wybor/szerokosc]);
}

/**
 * zmienia wartosc zmiennej "sprawdzone" pola na true
 * jesli obiekt ma wartosc 0 funkcja odpala takze rekurencyjnie samo siebie dla pol wokol wybranego pola
 * @tparam typ7 przyjmuje tablice dwuwymiarowa typu pole
 * @param wybor pole ktorego obiektowi zmieniamy stan
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param plansza plansza na ktorej rozgrywa sie gra
 * @param wskaznik ilosc niebomb na planszy wciaz nie sprawdzonych
 */
template <typename typ7>
void sprawdzanie(int wybor, int szerokosc, int wysokosc, typ7 plansza, int *wskaznik, bool automatycznie) {

    if(plansza[wybor%szerokosc][wybor/szerokosc].podajstan() == false){
        *wskaznik = *wskaznik - 1;
    }

    int wartoscsprawdzonego;

    if(automatycznie == false){
        wartoscsprawdzonego = plansza[wybor%szerokosc][wybor/szerokosc].sprawdz();
    }
    else{
        wartoscsprawdzonego = plansza[wybor%szerokosc][wybor/szerokosc].sprawdz(automatycznie);
    }


    automatycznie = true;

    if(wartoscsprawdzonego == 0){
        if(wybor/szerokosc < wysokosc - 1) {
            sprawdzanie(wybor + szerokosc, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor%szerokosc < szerokosc - 1) {
            sprawdzanie(wybor + 1, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor/szerokosc > 0) {
            sprawdzanie(wybor - szerokosc, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor%szerokosc > 0) {
            sprawdzanie(wybor - 1,szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor/szerokosc < wysokosc - 1 && wybor%szerokosc < szerokosc - 1) {
            sprawdzanie(wybor + szerokosc + 1, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor/szerokosc < wysokosc - 1 && wybor%szerokosc > 0) {
            sprawdzanie(wybor + szerokosc - 1, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor/szerokosc > 0 && wybor%szerokosc < szerokosc - 1) {
            sprawdzanie(wybor - szerokosc + 1, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }

        if(wybor/szerokosc > 0 && wybor%szerokosc > 0) {
            sprawdzanie(wybor - szerokosc - 1, szerokosc, wysokosc, plansza, wskaznik, automatycznie);
        }
    }
}

/**
 * wyswietla informacje o mozliwosciach dzialania w grze, a nastepnie zwraca wybor gracza
 * jesli adminmode jest wlaczony informuje o jego mozliwosciach, jesli nie - nie uda sie z nich skorzystac
 * @param adminmode sprawdza czy adminmode jest wlaczony w tej rozgrywce
 * @return zwraca wybor gracza
 */
int wyswietlinterfejs(bool adminmode);

/**
 * funkcja wyswietla informacje o wszystkich bombach
 * @tparam typ8 przyjmuje tablice jednowymiarowa typu bomba
 * @param szerokosc szerokosc planszy na ktorej rozgrywa sie gra
 * @param wysokosc wysokosc planszy na ktorej rozgrywa sie gra
 * @param iloscbomb informuje ile bomb jest zainicjowanych w tablicy
 * @param bomby tablica wszystkich bomb w grze
 */
template <typename typ8>
void wyswietlbomby(int szerokosc, int wysokosc, int iloscbomb, typ8 bomby){
    for(int i = 0; i < iloscbomb; i++){
        bomby[i].wyswietlwartosc(szerokosc, wysokosc);
    }
}

/**
 * funkcja zaprzyjazniona z klasa pole, wyswietla wszystkie informacje oprocz zmiennej "sprawdzona" dla jednego obiektu
 */
void wyswietlwszystko(pole&);



#endif //SAPER_INNE_H
