//
// Created by sebiz on 24.01.2022.
//

#ifndef SAPER_BOMBA_H
#define SAPER_BOMBA_H

#include "pole.h"

class bomba : public pole{
    int numerbomby;
public:

    /**
     * konstruktor klasy bomba
     * @param x kordynat x stworzonego obiektu (x liczony od lewej do prawej)
     * @param y kordynat y stworzonego obiektu (y liczony od gory do dolu)
     * @param wartosc wartosc ktore przyjmuje obiekt, jesli jest bomba to jest to 9, w innym przypadku jest to ilosc bomb wokol tego obiektu
     * @param sprawdzone informajca czy gracz zna wartosc tego obiektu
     * @param numerbomby numer stworzonego obiektu
     */
    bomba(int x = 0, int y = 0, int wartosc = 9, bool sprawdzone = false, int numerbomby = 1);

    /**
     * destruktor klasy bomba
     */
    ~bomba();

    /**
     * zmienia numer obiektu na ten podany w jej wywolaniu
     */
    void ustawnumer(int);

    /**
     * wyswietla numer bomby jej kordynaty oraz pod jaka wartoscia znajduje sie na planszy stworzonej z wartosci podanych w jej wywolaniu
     */
    void wyswietlwartosc(int, int);
};


#endif //SAPER_BOMBA_H
