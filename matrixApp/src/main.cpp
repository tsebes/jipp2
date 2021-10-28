//
// Created by sebiz on 28.10.2021.
//

#include <iostream>
#include <string>
#include "../include/matrixLib/lib.h"

using namespace std;

int main(int argc, char* argv[]){
    string action;
    if(argc>1) {
        action = argv[1];
        if(action=="addMatrix"){
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;

            int **taba = new int * [ikolumn];
            int **tabb = new int * [ikolumn];
            int **wynik =new int * [ikolumn];
            newtab(taba,ikolumn,iwierszy);
            filltab(taba,ikolumn,iwierszy);
            newtab(tabb,ikolumn,iwierszy);
            filltab(tabb,ikolumn,iwierszy);
            newtab(wynik,ikolumn,iwierszy);
            addtab(taba,tabb,wynik,ikolumn,iwierszy);
            showtab(wynik,ikolumn,iwierszy);
            deletetab(taba,ikolumn,iwierszy);
            deletetab(tabb,ikolumn,iwierszy);
            deletetab(wynik,ikolumn,iwierszy);


        }
       // else if{

       // }

    }
    else{
        cout << "nie wybrano funkcji" << endl;
        help(0);
    }

    system ("pause");
}

