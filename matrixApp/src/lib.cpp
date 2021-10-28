//
// Created by sebiz on 28.10.2021.
//


#include <iostream>

using namespace std;

void help(int function){
    switch(function){
        case 0:
            help(1);
            help(2);
            help(3);
            help(4);
            help(5);
            help(6);
            help(7);
            help(8);
            help(9);
            help(10);
            help(11);
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
    }

}

void newtab(int ** tab, int ikolumn,int iwierszy){
    for (int i = 0; i<iwierszy; i++){
        tab[i] = new int [iwierszy];
    }
}

void filltab(int ** tab, int ikolumn,int iwierszy){
    cout << "podawaj wartosci wierszami" << endl;
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            cin >>tab[i][j];
        }
    }
}


void showtab(int ** tab, int ikolumn,int iwierszy){
    cout << "macierz ma nastepujace wartosci:" << endl;
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            cout << tab[i][j] << "   ";
        }
        cout << endl;
    }
}

void addtab(int ** tab1, int ** tab2,int ** tab3, int ikolumn, int iwierszy){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
          tab3[i][j]=tab2[i][j]+tab1[i][j];
        }
    }
}

void deletetab(int ** tab, int ikolumn, int iwierszy){
    for (int i = 0; i<ikolumn; i++) {
        delete [] tab[i];
    }
    delete [] tab;
}