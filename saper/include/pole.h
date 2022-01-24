//
// Created by sebiz on 20.01.2022.
//

#pragma once

#ifndef MATRIXAPP_POLE_H
#define MATRIXAPP_POLE_H

class pole {
protected:
    int x;
    int y;
    int wartosc = 0; //wartosc oznacza ilosc bomb wokol pola (od 0 do 8), jesli pole samo jest bomba wartosc wynosi 9
    bool sprawdzone;
public:

    /**
     * konstruktor klasy pole
     * @param x kordynat x stworzonego obiektu (x liczony od lewej do prawej)
     * @param y kordynat y stworzonego obiektu (y liczony od gory do dolu)
     * @param wartosc wartosc ktore przyjmuje obiekt, jesli jest bomba to jest to 9, w innym przypadku jest to ilosc bomb wokol tego obiektu
     * @param sprawdzone informajca czy gracz zna wartosc tego obiektu
     */
    pole(int x = 0, int y = 0, int wartosc = 0, bool sprawdzone = false);

    /**
     * destruktor klasy pole
     */
    ~pole();

    /**
     * funkcja zwracajaca kordynat x obiektu
     * @return zwracany jest kordynat x
     */
    int podajx();

    /**
    * funkcja zwracajaca kordynat y obiektu
    * @return zwracany jest kordynat y
    */
    int podajy();

    /**
     * funkcja zwracajaca wartosc obiektu
     * @return zwracana jest wartosc obiektu
     */
    int podajwartosc();

    /**
     * funckja zwraca stan obiektu
     * @return zwracana jest zmienna "sprawdzone" obiektu
     */
    bool podajstan();

    /**
     * funckja zmienia obecne wartosci x oraz y obiektu na te podane w jej wywolaniu
     */
    void ustawxy(int, int);

    /**
     * funckja zmieniajaca wartosc obiektu na 9 (wartosc bomby)
     */
    void ustawwartosc();

    /**
     * funckja przeciazona zmieniajaca stan "sprawdzona" obiektu na true, zwraca takze wartosc obiektu
     * jesli pole bylo juz sprawdzone zwraca o tym informacje
     * @return zwraca wartosc obiektu, jesli przed wywolaniem funkcji stan obiektu "sprawdzona" byl true zwraca 10
     */
    int sprawdz();

    /**
     * funckja zmieniajaca stan "sprawdzona" obiektu na true, zwraca takze wartosc obiektu
     * @return zwraca wartosc obiektu, jesli przed wywolaniem funkcji stan obiektu "sprawdzona" byl true zwraca 10
     */
    int sprawdz(bool);

    /**
     * Funkcja przeciazenie znaku ++, ++ zwieksza o jeden zmienna "wartosc" obiektu
     */
    void operator ++();

    /**
     * deklaracja przyjazni z funkcja wyswietlwszystko
     */
    friend void wyswietlwszystko(pole&);
};




#endif //MATRIXAPP_POLE_H
