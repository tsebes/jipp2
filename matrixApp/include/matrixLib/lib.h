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

/**
 * pyta uzytkownika czy chce uzywac typ int czy typ double
 * @return zwraca wybor uzytkownika
 */
int typdanych();

/**
 * Tworzy nowa tablice typu int
 * @param iwierszy informuje ile wierszy ma miec tworzona tablica
 * @param ikolumn informuje ile kolumn ma miec tworzona tablica
 * @return zwracana zostaje stworzona tablica
 */
int **newtab( int iwierszy, int ikolumn);


/**
 * zapelnia tablice typu int wartosciami podanymi przez uzytkownika, wartosci wprowadzane sa wierszami
 * @param tab tablica ktora ma zostac zapelniona
 * @param iwierszy ilosc wierszy zapelnianej tablicy
 * @param ikolumn ilosc kolumn zapelnianej tablicy
 */
void filltab(int ** tab, int iwierszy, int ikolumn);

/**
 * wyswietla tablice typu int
 * @param tab tablica ktora ma zostac wyswietlona
 * @param iwierszy ilosc wierszy wyswietlanej tablicy
 * @param ikolumn ilosc kolumn wyswietlanej tablicy
 */
void showtab(int ** tab, int iwierszy, int ikolumn);

/**
 * usuwa z pamieci tablice typu int
 * @param tab tablica ktora ma byc usunieta
 * @param iwierszy ilosc wierszy tablicy ktora ma byc usunieta
 * @param ikolumn ilosc kolumn tablicy ktora ma byc usunieta
 */
void deletetab(int ** tab, int iwierszy, int ikolumn);

/**
 * dodaje do siebie dwie macierze typu int podane przez uzytkownika
 * @param tab1 pierwsza macierz do dodania
 * @param tab2 druga macierz do dodania
 * @param iwierszy ilosc wierszy tablic ktore dodajemy
 * @param ikolumn ilosc kolumn tablic ktore dodajemy
 */
void addMatrix(int ** tab1, int ** tab2,  int iwierszy, int ikolumn);

/**
* odejmuje macierz od macierzy, obie macierze sa typu int podane przez uzytkownika
* @param tab1 pierwsza macierz (odjemna)
* @param tab2 druga macierz (odjemnik)
* @param iwierszy ilosc wierszy tablic ktore odejmujemy
* @param ikolumn ilosc kolumn tablic ktore odejmujemy
*/
void subtractMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn);

/**
 * mnozy dwie macierze przez siebie, obie macierze sa typu int podane przez uzytkownika
 * @param tab1 pierwsza macierz ktora bedziemy mnozyc
 * @param tab2 druga macierz ktora bedziemy mnozyc
 * @param iwierszy ilosc wierszy pierwszej macierzy
 * @param ikolumn ilosc kolumn pierwszej macierzy - jest rowna ilosci wierszy drugiej macierzy
 * @param ikolumn2 ilosc kolumn drugiej macierzy
 * @return zwracana jest tablica ktora jest wynikiem mnozeniem mnozenia
 */
int **multiplyMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn, int ikolumn2);

/**
 * mnozy macierz typu int przez skalar tego samego typu
 * @param tab1 macierz ktora bedziemy mnozyc
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 * @param skalar wartosc skalaru przez ktory mnozymy macierz
 */
void multiplyByScalar(int ** tab1,int iwierszy,int ikolumn,int skalar);

/**
 * transpozycja macierzy typu int podanej przez uzytkownika
 * @param tab1 macierz ktora zostanie transpozycjonowana
 * @param iwierszy ilosc wierszy macierzy ktora podajemy
 * @param ikolumn ilosc kolumn macierzy ktora podajemy
 * @return zwracana zostaje macierz ktora jest transpozycja podanej macierzy
 */
int **transpozeMatrix(int ** tab1,int iwierszy,int ikolumn);

/**
 * potegujemy macierz typu int podana przez uzytkownika
 * @param tab1 macierz ktora bedzie potegowana
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 * @param potega stopien potegi do ktorej bedziemy podnosili macierz, musi byc nieujemna
 */
void powerMatrix(int ** tab1, int iwierszy, int ikolumn, int unsigned potega);

/**
 * obliczanie wyznacznika macierzy typu int podanej przez uzytkownika
 * @param tab1 macierz podana przez uzytkowanika
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 * @return zwracana zostaje wartosc wyzncznika podanej macierzy
 */
int determinantMatrix(int **tab1,int iwierszy,int ikolumn);

/**
 * funkcja sprawdza czy macierz typu int podana przez uzytkownika jest diagonalna
 * @param tab1 macierz podana przez uzytkownika
 * @param iwierszy ilosc wierszy w podanej macierzy
 * @param ikolumn ilosc kolumn w podanej macierzy
 * @return zwracana jest informacja typu bool czy macierz jest diagonalna
 */
bool matrixIsDiagonal(int **tab1,int iwierszy,int ikolumn);

/**
 * funkcja zamienia miejscami dwie podane wartosci typu int
 * @param wartosca pierwsza podana wartosc
 * @param wartoscb druga podana wartosc
 */
void swap(int *wartosca,int *wartoscb);

/**
 * sortuje rosnoco podana tablice jednowymiarowa typu int
 * @param tab1 tablica ktora sortujemy
 * @param ikolumn ilosc kolumn w tablicy do posortowania
 */
void sortRow(int *tab1,int ikolumn);

/**
 * sortuje wszystkie wiersze podanej macierzy typu int rosnoco
 * @param tab1 macierz ktora sortujemy
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 */
void sortRowsInMatrix(int ** tab1,int iwierszy, int ikolumn);

/**
 * sprawdza czy wartosc wpisana przez uzytkownika jest typu int i w przypadku innego typu prosi o podanie nowej wartosci
 * @param zmienna zmienna ktora sprawdzamy czy zostala podana prawidlowo
 */
void dobradana(int *zmienna);


/**
 * Tworzy nowa tablice typu double
 * @param iwierszy informuje ile wierszy ma miec tworzona tablica
 * @param ikolumn informuje ile kolumn ma miec tworzona tablica
 * @return zwracana zostaje stworzona tablica
 */
double **newtabdouble( int iwierszy, int ikolumn);


/**
 * zapelnia tablice typu double wartosciami podanymi przez uzytkownika, wartosci wprowadzane sa wierszami
 * @param tab tablica ktora ma zostac zapelniona
 * @param iwierszy ilosc wierszy zapelnianej tablicy
 * @param ikolumn ilosc kolumn zapelnianej tablicy
 */
void filltab(double ** tab, int iwierszy, int ikolumn);

/**
 * wyswietla tablice typu double
 * @param tab tablica ktora ma zostac wyswietlona
 * @param iwierszy ilosc wierszy wyswietlanej tablicy
 * @param ikolumn ilosc kolumn wyswietlanej tablicy
 */
void showtab(double ** tab, int iwierszy, int ikolumn);

/**
 * usuwa z pamieci tablice typu double
 * @param tab tablica ktora ma byc usunieta
 * @param iwierszy ilosc wierszy tablicy ktora ma byc usunieta
 * @param ikolumn ilosc kolumn tablicy ktora ma byc usunieta
 */
void deletetab(double ** tab, int iwierszy, int ikolumn);

/**
 * dodaje do siebie dwie macierze typu double podane przez uzytkownika
 * @param tab1 pierwsza macierz do dodania
 * @param tab2 druga macierz do dodania
 * @param iwierszy ilosc wierszy tablic ktore dodajemy
 * @param ikolumn ilosc kolumn tablic ktore dodajemy
 */
void addMatrix(double ** tab1, double ** tab2,  int iwierszy, int ikolumn);

/**
* odejmuje macierz od macierzy, obie macierze sa typu double podane przez uzytkownika
* @param tab1 pierwsza macierz (odjemna)
* @param tab2 druga macierz (odjemnik)
* @param iwierszy ilosc wierszy tablic ktore odejmujemy
* @param ikolumn ilosc kolumn tablic ktore odejmujemy
*/
void subtractMatrix(double ** tab1, double ** tab2, int iwierszy, int ikolumn);

/**
 * mnozy dwie macierze przez siebie, obie macierze sa typu double podane przez uzytkownika
 * @param tab1 pierwsza macierz ktora bedziemy mnozyc
 * @param tab2 druga macierz ktora bedziemy mnozyc
 * @param iwierszy ilosc wierszy pierwszej macierzy
 * @param ikolumn ilosc kolumn pierwszej macierzy - jest rowna ilosci wierszy drugiej macierzy
 * @param ikolumn2 ilosc kolumn drugiej macierzy
 * @return zwracana jest tablica ktora jest wynikiem mnozeniem mnozenia
 */
double **multiplyMatrix(double ** tab1, double ** tab2, int iwierszy, int ikolumn, int ikolumn2);

/**
 * mnozy macierz typu double przez skalar tego samego typu
 * @param tab1 macierz ktora bedziemy mnozyc
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 * @param skalar wartosc skalaru przez ktory mnozymy macierz
 */
void multiplyByScalar(double ** tab1,int iwierszy,int ikolumn,double skalar);

/**
 * transpozycja macierzy typu double podanej przez uzytkownika
 * @param tab1 macierz ktora zostanie transpozycjonowana
 * @param iwierszy ilosc wierszy macierzy ktora podajemy
 * @param ikolumn ilosc kolumn macierzy ktora podajemy
 * @return zwracana zostaje macierz ktora jest transpozycja podanej macierzy
 */
double **transpozeMatrix(double ** tab1,int iwierszy,int ikolumn);

/**
 * potegujemy macierz typu double podana przez uzytkownika
 * @param tab1 macierz ktora bedzie potegowana
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 * @param potega stopien potegi do ktorej bedziemy podnosili macierz, musi byc nieujemna
 */
void powerMatrix(double ** tab1, int iwierszy, int ikolumn, int unsigned potega);

/**
 * obliczanie wyznacznika macierzy typu double podanej przez uzytkownika
 * @param tab1 macierz podana przez uzytkowanika
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 * @return zwracana zostaje wartosc wyzncznika podanej macierzy
 */
double determinantMatrix(double **tab1,int iwierszy,int ikolumn);

/**
 * funkcja sprawdza czy macierz typu double podana przez uzytkownika jest diagonalna
 * @param tab1 macierz podana przez uzytkownika
 * @param iwierszy ilosc wierszy w podanej macierzy
 * @param ikolumn ilosc kolumn w podanej macierzy
 * @return zwracana jest informacja typu bool czy macierz jest diagonalna
 */
bool matrixIsDiagonal(double **tab1,int iwierszy,int ikolumn);

/**
 * funkcja zamienia miejscami dwie podane wartosci typu double
 * @param wartosca pierwsza podana wartosc
 * @param wartoscb druga podana wartosc
 */
void swap(double *wartosca,double *wartoscb);

/**
 * sortuje rosnoco podana tablice jednowymiarowa typu double
 * @param tab1 tablica ktora sortujemy
 * @param ikolumn ilosc kolumn w tablicy do posortowania
 */
void sortRow(double *tab1,int ikolumn);

/**
 * sortuje wszystkie wiersze podanej macierzy typu double rosnoco
 * @param tab1 macierz ktora sortujemy
 * @param iwierszy ilosc wierszy podanej macierzy
 * @param ikolumn ilosc kolumn podanej macierzy
 */
void sortRowsInMatrix(double ** tab1,int iwierszy, int ikolumn);

/**
 * sprawdza czy wartosc wpisana przez uzytkownika jest typu double i w przypadku innego typu prosi o podanie nowej wartosci
 * @param zmienna zmienna ktora sprawdzamy czy zostala podana prawidlowo
 */
void dobradana(double *zmienna);





#endif //JIPP2_LIB_H
