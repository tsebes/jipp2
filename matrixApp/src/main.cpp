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
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                int **tabb = newtab(iwierszy,ikolumn);
                int **wynik = newtab(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                filltab(tabb,iwierszy,ikolumn);
                wynik = addMatrix(taba,tabb,iwierszy,ikolumn);
                showtab(wynik,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(tabb,iwierszy,ikolumn);
                deletetab(wynik,iwierszy,ikolumn);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                double **tabb = newtabdouble(iwierszy,ikolumn);
                double **wynik = newtabdouble(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                filltab(tabb,iwierszy,ikolumn);
                wynik = addMatrix(taba,tabb,iwierszy,ikolumn);
                showtab(wynik,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(tabb,iwierszy,ikolumn);
                deletetab(wynik,iwierszy,ikolumn);
            }

        }else if(action=="subtractMatrix"){

            cout << "wybrano akcje subtractMatrix" << endl;
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                int **tabb = newtab(iwierszy,ikolumn);
                int **wynik = newtab(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                filltab(tabb,iwierszy,ikolumn);
                wynik = subtractMatrix(taba,tabb,ikolumn,iwierszy);
                showtab(wynik,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(tabb,iwierszy,ikolumn);
                deletetab(wynik,iwierszy,ikolumn);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                double **tabb = newtabdouble(iwierszy,ikolumn);
                double **wynik = newtabdouble(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                filltab(tabb,iwierszy,ikolumn);
                wynik = subtractMatrix(taba,tabb,ikolumn,iwierszy);
                showtab(wynik,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(tabb,iwierszy,ikolumn);
                deletetab(wynik,iwierszy,ikolumn);
            }

       }else if(action=="multiplyMatrix"){

            cout << "wybrano akcje multiplyMatrix" << endl;
            int ikolumn,iwierszy,ikolumn2;
            cout << "podaj ilosc wierszy pierwszej macierzy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn pierwszej macierzy" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);
            cout << "podaj ilosc kolumn drugiej macierzy" << endl;
            cin >> ikolumn2;
            dobradana(&ikolumn2);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                int **tabb = newtab(iwierszy,ikolumn);
                int **wynik = newtab(iwierszy,ikolumn2);
                filltab(taba,iwierszy,ikolumn);
                filltab(tabb,ikolumn,ikolumn2);
                wynik = multiplyMatrix(taba,tabb,iwierszy,ikolumn,ikolumn2);
                showtab(wynik,iwierszy,ikolumn2);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(tabb,ikolumn,ikolumn2);
                deletetab(wynik,iwierszy,ikolumn2);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                double **tabb = newtabdouble(iwierszy,ikolumn);
                double **wynik = newtabdouble(iwierszy,ikolumn2);
                filltab(taba,iwierszy,ikolumn);
                filltab(tabb,ikolumn,ikolumn2);
                wynik = multiplyMatrix(taba,tabb,iwierszy,ikolumn,ikolumn2);
                showtab(wynik,iwierszy,ikolumn2);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(tabb,ikolumn,ikolumn2);
                deletetab(wynik,iwierszy,ikolumn2);
            }

       }else if(action=="multiplyByScalar") {

            cout << "wybrano akcje multiplyByScalar" << endl;
            int ikolumn, iwierszy, skalar;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);
            cout << "podaj skalar" <<endl;
            cin >>skalar;
            dobradana(&skalar);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                int **wynik = newtab(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                wynik = multiplyByScalar(taba,iwierszy,ikolumn,skalar);
                showtab(wynik,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(wynik,iwierszy,ikolumn);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                double **wynik = newtabdouble(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                wynik = multiplyByScalar(taba,iwierszy,ikolumn,skalar);
                showtab(wynik,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(wynik,iwierszy,ikolumn);
            }

       }else if(action=="transpozeMatrix") {
            cout << "wybrano akcje transpozeMatrix" << endl;
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                int **wynik=newtab(ikolumn,iwierszy);
                filltab(taba,iwierszy,ikolumn);
                wynik=transpozeMatrix(taba,iwierszy,ikolumn);
                showtab(wynik,ikolumn,iwierszy);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(wynik,ikolumn,iwierszy);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                double **wynik=newtabdouble(ikolumn,iwierszy);
                filltab(taba,iwierszy,ikolumn);
                wynik=transpozeMatrix(taba,iwierszy,ikolumn);
                showtab(wynik,ikolumn,iwierszy);
                deletetab(taba,iwierszy,ikolumn);
                deletetab(wynik,ikolumn,iwierszy);
            }

        }else if(action=="powerMatrix") {

            if(argc>2){

                cout << "wybrano akcje powerMatrix" << endl;
                if(stoi(argv[2])<0) {
                    cout << "podaj potege dodatnia" << endl;
                }
                else{
                    int iwierszy;
                    int unsigned potega;
                    cout << "podaj ilosc wierszy" << endl;
                    cin >> iwierszy;
                    dobradana(&iwierszy);
                    potega = stoi(argv[2]);

                    if(typdanych()==1){
                        int **taba = newtab(iwierszy,iwierszy);
                        int **wynik = newtab(iwierszy,iwierszy);
                        filltab(taba,iwierszy,iwierszy);
                        wynik = powerMatrix(taba,iwierszy,iwierszy,potega);
                        showtab(wynik, iwierszy, iwierszy);
                        deletetab(taba,iwierszy,iwierszy);
                        deletetab(wynik,iwierszy,iwierszy);
                    }else{
                        double **taba = newtabdouble(iwierszy,iwierszy);
                        double **wynik = newtabdouble(iwierszy,iwierszy);
                        filltab(taba,iwierszy,iwierszy);
                        wynik = powerMatrix(taba,iwierszy,iwierszy,potega);
                        showtab(wynik, iwierszy, iwierszy);
                        deletetab(taba,iwierszy,iwierszy);
                        deletetab(wynik,iwierszy,iwierszy);
                    }
                }
            }
            else{
                cout << "brak potegi w argumentach funkcji main" <<endl;
                help(6);
            }
        }else if(action=="determinantMatrix"){

            cout << "wybrano akcje determinantMatrix" << endl;
            int iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);

            if(typdanych()==1){
                int wynik;
                int **taba = newtab(iwierszy,iwierszy);
                filltab(taba,iwierszy,iwierszy);
                wynik = determinantMatrix(taba,iwierszy,iwierszy);
                cout << "wyznacznik tej macierzy wynosi:" << wynik << endl;
                deletetab(taba,iwierszy,iwierszy);
            }else{
                double wynik;
                double **taba = newtabdouble(iwierszy,iwierszy);
                filltab(taba,iwierszy,iwierszy);
                wynik = determinantMatrix(taba,iwierszy,iwierszy);
                cout << "wyznacznik tej macierzy wynosi:" << wynik << endl;
                deletetab(taba,iwierszy,iwierszy);
            }



        }else if(action=="matrixIsDiagonal"){

            cout << "wybrano akcje matrixIsDiagonal" << endl;
            int iwierszy,ikolumn;
            bool wynik;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                wynik = matrixIsDiagonal(taba, iwierszy, ikolumn);
                if(wynik == true){
                    cout << "macierz jest diagonalna"<< endl;
                }else{
                    cout << "macierz nie jest diagonalna"<< endl;
                }
                deletetab(taba,iwierszy,ikolumn);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                filltab(taba,iwierszy,ikolumn);
                wynik = matrixIsDiagonal(taba, iwierszy, ikolumn);
                if(wynik == true){
                    cout << "macierz jest diagonalna"<< endl;
                }else{
                    cout << "macierz nie jest diagonalna"<< endl;
                }
                deletetab(taba,iwierszy,ikolumn);
            }



        }else if(action == "swap"){

            if(typdanych() == 1){
                int wartosca,wartoscb;
                cout << "podaj wartosc a" << endl;
                cin >> wartosca;
                dobradana(&wartosca);
                cout << "podaj wartosc b" << endl;
                cin >> wartoscb;
                dobradana(&wartoscb);

                cout << "a wynosi: " << wartosca << endl << "b wynosi: " << wartoscb << endl;
                swap(&wartosca,&wartoscb);
                cout << "po zamianie" << endl << "a wynosi: " << wartosca << endl << "b wynosi: " << wartoscb << endl;

            }else{
                double wartosca,wartoscb;
                cout << "podaj wartosc a" << endl;
                cin >> wartosca;
                dobradana(&wartosca);
                cout << "podaj wartosc b" << endl;
                cin >> wartoscb;
                dobradana(&wartoscb);

                cout << "a wynosi: " << wartosca << endl << "b wynosi: " << wartoscb << endl;
                swap(&wartosca,&wartoscb);
                cout << "po zamianie" << endl << "a wynosi: " << wartosca << endl << "b wynosi: " << wartoscb << endl;

            }

        }else if(action == "sortRow"){

            int ikolumn;
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);

            if(typdanych() == 1){
                int * taba = new int[ikolumn];
                cout << "podaj wartosci do posortowania:" << endl;
                for(int i = 0; i < ikolumn;i++){
                    cin >> taba[i];
                }
                sortRow(taba,ikolumn);
                cout << "posortowane wartosci:" << endl;
                for(int i=0;i<ikolumn;i++){
                    cout << taba[i] << "  ";
                }
                delete [] taba;
            }else{
                double * taba = new double[ikolumn];
                cout << "podaj wartosci do posortowania:" << endl;
                for(int i=0;i<ikolumn;i++){
                    cin >> taba[i];
                }
                sortRow(taba,ikolumn);
                cout << "posortowane wartosci:" << endl;
                for(int i=0;i<ikolumn;i++){
                    cout << taba[i] << "  ";
                }
                delete [] taba;
            }

        }else if(action=="sortRowsInMatrix"){

            cout << "wybrano akcje sortRowsInMatrix" << endl;
            int ikolumn,iwierszy;
            cout << "podaj ilosc wierszy" << endl;
            cin >> iwierszy;
            dobradana(&iwierszy);
            cout << "podaj ilosc kolumn" << endl;
            cin >> ikolumn;
            dobradana(&ikolumn);

            if(typdanych()==1){
                int **taba = newtab(iwierszy,ikolumn);
                filltab(taba,iwierszy,iwierszy);
                sortRowsInMatrix(taba,iwierszy,ikolumn);
                cout << "po posortowaniu ";
                showtab(taba,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
            }else{
                double **taba = newtabdouble(iwierszy,ikolumn);
                filltab(taba,iwierszy,iwierszy);
                sortRowsInMatrix(taba,iwierszy,ikolumn);
                cout << "po posortowaniu ";
                showtab(taba,iwierszy,ikolumn);
                deletetab(taba,iwierszy,ikolumn);
            }

        }else if(action=="help"){
            help(0);
        }else{
            cout << "podana wartosc nie ma przypisanej do niej funkcji" << endl;
            help(0);
        }
    }
    else{
        cout << "nie wybrano funkcji" << endl;
        help(0);
    }

}

