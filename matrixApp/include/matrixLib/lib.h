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

int **newtab( int iwierszy, int ikolumn);

void filltab(int ** tab, int iwierszy, int ikolumn);

void showtab(int ** tab, int iwierszy, int ikolumn);

void deletetab(int ** tab, int iwierszy, int ikolumn);

void addMatrix(int ** tab1, int ** tab2,  int iwierszy, int ikolumn);

void subtractMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn);

int **multiplyMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn, int ikolumn2);

void multiplyByScalar(int ** tab1,int iwierszy,int ikolumn,int skalar);

int **transpozeMatrix(int ** tab1,int iwierszy,int ikolumn);

int **powerMatrix(int ** tab1, int iwierszy, int ikolumn, int unsigned potega);






#endif //JIPP2_LIB_H