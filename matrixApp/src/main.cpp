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
            cout << "wybrano akcje addMatrix" << endl;
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;

            int **taba = newtab(iwierszy,ikolumn);
            int **tabb = newtab(iwierszy,ikolumn);
            filltab(taba,iwierszy,ikolumn);
            filltab(tabb,iwierszy,ikolumn);
            addMatrix(taba,tabb,iwierszy,ikolumn);
            showtab(taba,iwierszy,ikolumn);
            deletetab(taba,iwierszy,ikolumn);
            deletetab(tabb,iwierszy,ikolumn);

        }else if(action=="subtractMatrix"){
            cout << "wybrano akcje subtractMatrix" << endl;
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;

            int **taba = newtab(iwierszy,ikolumn);
            int **tabb = newtab(iwierszy,ikolumn);
            filltab(taba,iwierszy,ikolumn);
            filltab(tabb,iwierszy,ikolumn);
            subtractMatrix(taba,tabb,ikolumn,iwierszy);
            showtab(taba,iwierszy,ikolumn);
            deletetab(taba,iwierszy,ikolumn);
            deletetab(tabb,iwierszy,ikolumn);

       }else if(action=="multiplyMatrix"){
            cout << "wybrano akcje multiplyMatrix" << endl;
            int ikolumn,iwierszy,ikolumn2;
            cout << "podaj ilosc wierszy pierwszej macierzy" << endl;
            cin >> iwierszy;
            cout << "podaj ilosc kolumn pierwszej macierzy" << endl;
            cin >> ikolumn;
            cout << "podaj ilosc kolumn drugiej macierzy" << endl;
            cin >> ikolumn2;

            int **taba=newtab(iwierszy,ikolumn);
            int **tabb=newtab(ikolumn,ikolumn2);
            int **wynik=newtab(iwierszy,ikolumn2);
            filltab(taba,iwierszy,ikolumn);
            filltab(tabb,ikolumn,ikolumn2);
            wynik=multiplyMatrix(taba,tabb,iwierszy,ikolumn,ikolumn2);
            showtab(wynik,iwierszy,ikolumn2);
            deletetab(taba,iwierszy,ikolumn);
            deletetab(tabb,ikolumn,ikolumn2);
            deletetab(wynik,iwierszy,ikolumn2);

       }else if(action=="multiplyByScalar") {
            cout << "wybrano akcje multiplyByScalar" << endl;
            int ikolumn, iwierszy, skalar;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            cout << "podaj skalar" <<endl;
            cin >>skalar;

            int **taba=newtab(iwierszy,ikolumn);
            filltab(taba,iwierszy,ikolumn);
            multiplyByScalar(taba,iwierszy,ikolumn,skalar);
            showtab(taba,iwierszy,ikolumn);
            deletetab(taba,iwierszy,ikolumn);

       }else if(action=="transpozeMatrix") {
            cout << "wybrano akcje transpozeMatrix" << endl;
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;

            int **taba=newtab(iwierszy,ikolumn);
            filltab(taba,iwierszy,ikolumn);
            int **wynik=newtab(ikolumn,iwierszy);
            wynik=transpozeMatrix(taba,iwierszy,ikolumn);
            showtab(wynik,ikolumn,iwierszy);
            deletetab(taba,iwierszy,ikolumn);
            deletetab(wynik,ikolumn,iwierszy);
        }else if(action=="powerMatrix") {
            if(argc<2){
                cout << "brak potegi w argumentach funkcji main" <<endl;
                help(6);
            }
            else{
                cout << "wybrano akcje powerMatrix" << endl;
                if(stoi(argv[2])<0){
                    cout << "podaj potege dodatnia" << endl;
                }
                else{
                int iwierszy;
                int unsigned potega;
                cout << "podaj ilosc wierszy" << endl;
                cin >> iwierszy;
                potega = stoi(argv[2]);

                int **taba=newtab(iwierszy,iwierszy);
                filltab(taba,iwierszy,iwierszy);
                powerMatrix(taba,iwierszy,iwierszy,potega);
                showtab(taba, iwierszy, iwierszy);
                deletetab(taba,iwierszy,iwierszy);
                }

            }
        }else if(action=="determinantMatrix"){
            cout << "wybrano akcje determinantMatrix" << endl;



        }
    }
    else{
        cout << "nie wybrano funkcji" << endl;
        help(0);
    }

    system ("pause");
}

