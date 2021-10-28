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

int **newtab( int iwierszy, int ikolumn){
    int **tab = new int*[iwierszy];
    for (int i = 0; i<iwierszy; ++i){
        tab[i] = new int [ikolumn];
    }
    return tab;
}

void filltab(int ** tab, int iwierszy, int ikolumn){
    cout << "podawaj wartosci wierszami" << endl;
    for (int i = 0; i<iwierszy; ++i){
        for(int j = 0; j<ikolumn; ++j){
            cin >>tab[i][j];
        }
    }
}


void showtab(int ** tab, int iwierszy, int ikolumn){
    cout << "macierz ma nastepujace wartosci:" << endl;
    for (int i = 0; i<iwierszy; ++i){
        for(int j = 0; j<ikolumn; ++j){
            cout << tab[i][j] << "   ";
        }
        cout << endl;
    }
}
void deletetab(int ** tab, int iwierszy, int ikolumn){
    for (int i = 0; i<iwierszy; ++i) {
        delete [] tab[i];
    }
    delete [] tab;
}

void addMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
          tab1[i][j]=tab2[i][j]+tab1[i][j];
        }
    }
}


void subtractMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab1[i][j]=tab1[i][j]-tab2[i][j];
        }
    }
}

int **multiplyMatrix(int ** tab1, int ** tab2, int iwierszy, int ikolumn, int ikolumn2){
    int **tab3=newtab(iwierszy,ikolumn2);
    int wartosc;
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn2; j++){
        wartosc=0;
        for(int k = 0; k < ikolumn; k++){
            wartosc=wartosc+tab1[i][k]*tab2[k][j];
        }
        tab3[i][j]=wartosc;
        }
    }
    return tab3;
}

void multiplyByScalar(int ** tab1,int iwierszy,int ikolumn,int skalar){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab1[i][j]=tab1[i][j]*skalar;
        }
    }
}

int **transpozeMatrix(int ** tab1,int iwierszy,int ikolumn){
    int **tab2=newtab(ikolumn,iwierszy);
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab2[j][i]=tab1[i][j];
        }
    }
    return tab2;
}

void **powerMatrix(int ** tab1,int iwierszy, int ikolumn, int unsigned potega){
    int **tab2=newtab(iwierszy,iwierszy);
    int wartosc;
    if(potega==0){
        for (int i = 0; i<iwierszy; i++){
            for(int j = 0; j<iwierszy; j++){
                if(i==j){
                    tab2[i][j]=1;
                }
                else{
                    tab2[i][j]=0;
                }
            }
        }
    }else {
        for (int i = 0; i<iwierszy; i++){
            for(int j = 0; j<iwierszy; j++){
                tab2[i][j]=tab1[i][j];
            }
        }
        for (int unsigned i = 0; i < potega-1; i++) {
            for (int i = 0; i<iwierszy; i++){
                for(int j = 0; j<iwierszy; j++){
                    wartosc=0;
                    for(int k = 0; k < iwierszy; k++){
                        wartosc=wartosc+tab1[i][k]*tab2[k][j];
                    }
                    tab1[i][j]=wartosc;
                }
            }
        }
    }
}