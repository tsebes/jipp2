//
// Created by sebiz on 28.10.2021.
//

#include "../../src/lib.cpp"

#ifndef JIPP2_LIB_H
#define JIPP2_LIB_H

/**
 * Wyswietla informacje dotyczace konkretnej funkcji, 0 wyswietla informacje o wszystkich funkcjach
 * @param function wybor ktorej funkcji informacje chcemy wyswietlic
 */
void help(int function);

void newtab(int ** tab, int ikolumn, int iwierszy);

void filltab(int ** tab, int ikolumn,int iwierszy);

void showtab(int ** tab, int ikolumn, int iwierszy);

void deletetab(int ** tab, int ikolumn, int iwierszy);

void addtab(int ** tab1, int ** tab2,int ** tab3, int ikolumn, int iwierszy);

void subtracttab(int ** tab1, int ** tab2,int ** tab3, int ikolumn, int iwierszy);






#endif //JIPP2_LIB_H
