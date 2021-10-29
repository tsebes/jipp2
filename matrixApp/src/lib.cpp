//
// Created by sebiz on 28.10.2021.
//


#include <iostream>

using namespace std;

void help(int function){
            if(function==0) {
                cout << "aby uruchomic funckje nalezy wprowadzic jej nazwe jako argument funkcji" << endl;
                cout << "Mozliwe funkcje:" << endl;
                cout << "1 - addMatrix" << endl;
                cout << "2 - subtractMatrix" << endl;
                cout << "3 - multiplyMatrix" << endl;
                cout << "4 - multiplyByScalar" << endl;
                cout << "5 - transpozeMatrix" << endl;
                cout << "6 - powerMatrix" << endl;
                cout << "7 - determinantMatrix" << endl;
                cout << "8 - matrixIsDiagonal" << endl;
                cout << "9 - swap" << endl;
                cout << "10 - sortRow" << endl;
                cout << "11 - sortRowsInMatrix" << endl << endl;


                cout << "wpisz numer funkcji aby dowiedziec sie o niej wiecej, wpisz 0 by wyjsc, wpisz 12 aby dowiedziec sie wiecej o wpisywaniu danych do macierzy" << endl;
                do {
                    cin >> function;
                    while(cin.fail())
                    {   cout << "Wprowadziles bledne dane!" << endl;
                        cin.clear();
                        cin.ignore(1000,'\n');
                        cout << "Wprowadz dane ponownie:" << endl;
                        cin >> function;
                    }
                    if(function<0||function>12){
                        cout << "podano zla wartosc, wybierz znowu" << endl;
                    }
                }while(function<0||function>12);
            }
            switch(function){
                case 0:
            break;
                case 1:
                    cout << "funkcja addMatrix potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona dwie macierze a nastepnie je dodaje" << endl;
            break;
                case 2:
                    cout << "funkcja subtractMatrix potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona dwie macierze a nastepnie je odejmuje" << endl;
            break;
                case 3:
                    cout << "funkcja multiplyMatrix potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona dwie macierze a nastepnie je mnozy" << endl;
            break;
                case 4:
                    cout << "funkcja multiplyByScalar potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona jedna macierz, prosi o podanie skalaru a nastepnie mnozy macierz przez skalar" << endl;
            break;
                case 5:
                    cout << "funkcja tranpozeMatrix potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona macierz a nastepnie pokazuje nam macierz transponowana do stworzonej macierzy" << endl;
            break;
                case 6:
                    cout << "funkcja powerMatrix potrzebuje do wywolania dwoch argumentow - jej nazwy oraz potegi do ktorej chemy podniesc macierz" << endl;
                    cout << "potega musi byc nieujemna" << endl;
                    cout << "tworzy ona macierz a nastepnie podnosi ja do podanej potegi" << endl;
            break;
                case 7:
                    cout << "funkcja determinantMatrix potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona macierz a nastepnie oblicza jej wyznacznik" << endl;
            break;
                case 8:
                    cout << "funkcja matrixIsDiagonal potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona macierz a nastepnie sprawdza czy jest diagonalna" << endl;
            break;
                case 9:
                    cout << "funkcja swap potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "zamienia ona dwie wartosci ze soba" << endl;
            break;
                case 10:
                    cout << "funkcja sortRow potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona tablice jednowymiarowa a nastepnie sortuje jej wartosci rosnaco" << endl;
            break;
                case 11:
                    cout << "funkcja sortRowsInMatrix potrzebuje do wywolania jedynie jednego argumentu - jej nazwy" << endl;
                    cout << "tworzy ona macierz a nastepnie sortuje wszystkie jej wiersze rosnaco" << endl;
            break;
                case 12:
                    cout << "Dane do macierzy sa wczytywane po wczytaniu jej rozmiarow, za pomoca funkcji filltab" << endl;
                    cout << "Wczytuje ona dane po kolei wierszami, w przypadku podania blednego typu funkcja prosi o ponowne podanie wartosci" << endl;
            break;
    }

}

int typdanych(){
    int wybor;
    cout << "wpisz 1 jesli chcesz wybrac typ int" << endl << "wpisz 2 jesli chcesz wybrac typ double" << endl;
    do {
        cin >> wybor;
        while(cin.fail())
        {   cout << "Wprowadziles bledne dane!" << endl;
            cin.clear();
            cin.ignore(1000,'\n');
            cout << "Wprowadz dane ponownie:" << endl;
            cin >> wybor;
        }
        if(wybor!=1&&wybor!=2){
            cout << "podano zla wartosc, wybierz znowu" << endl;
        }
    }while(wybor!=1&&wybor!=2);
    return wybor;
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
            while(cin.fail())
            {   cout << "Wprowadziles bledne dane!" << endl;
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Wprowadz dane ponownie:" << endl;
                cin >> tab[i][j];
            }
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

void powerMatrix(int ** tab1,int iwierszy, int ikolumn, int unsigned potega){
    if(iwierszy!=ikolumn){
        cout << "potegowac mozna jedynie macierze kwadratowe" << endl;
    }else{
    int **tab2=newtab(iwierszy,iwierszy);
    int **tab3=newtab(iwierszy,iwierszy);
    int wartosc;
    if(potega==0){
        for (int i = 0; i<iwierszy; i++){
            for(int j = 0; j<iwierszy; j++){
                if(i==j){
                    tab1[i][j]=1;
                }
                else{
                    tab1[i][j]=0;
                }
            }
        }
    }else {
        for (int i = 0; i<iwierszy; i++){
            for(int j = 0; j<iwierszy; j++){
                tab2[i][j]=tab1[i][j];
                tab3[i][j]=tab1[i][j];
            }
        }
        for (int unsigned l = 0; l < potega-1; l++) {
            for (int i = 0; i<iwierszy; i++){
                for(int j = 0; j<iwierszy; j++){
                    wartosc=0;
                    for(int k = 0; k < iwierszy; k++){
                        wartosc=wartosc+tab1[i][k]*tab2[k][j];
                    }
                    tab3[i][j]=wartosc;
                }
            }
        }
        for (int i = 0; i<iwierszy; i++){
            for(int j = 0; j<iwierszy; j++){
                tab1[i][j]=tab3[i][j];
            }
        }
        deletetab(tab2,iwierszy,iwierszy);
        deletetab(tab3,iwierszy,iwierszy);
    }
    }
}

int determinantMatrix(int **tab1,int iwierszy,int ikolumn){
    if(iwierszy!=ikolumn){
        cout << "wyznacznik istnieje tylko dla macierzy kwadratowej" << endl;
        return 0;
    }else if(iwierszy==1){
        return tab1[0][0];
    }else{
        int wynik=0,iloczyn,k,j;
        for (int i = 0; i<iwierszy; i++){
            k=0;
            j=i;
            iloczyn=1;
            do {
            iloczyn=iloczyn*tab1[j][k];
            k++;
            j++;
            if(k==iwierszy){
                k=k-iwierszy;
            }
            if(j==iwierszy){
                j=j-iwierszy;
            }
            }while(i!=j);
            wynik=wynik+iloczyn;
        }
        for (int i = iwierszy-1; i>=0; i--){
            k=0;
            j=i;
            iloczyn=1;
            do {
                iloczyn=iloczyn*tab1[j][k];
                k--;
                j++;
                if(k<0){
                    k=k+iwierszy;
                }
                if(j==iwierszy){
                    j=j-iwierszy;
                }
            }while(i!=j);
            wynik=wynik-iloczyn;
        }
        return wynik;
    }
}

bool matrixIsDiagonal(int **tab1,int iwierszy,int ikolumn){
    bool wynik=true;
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            if(i!=j&&tab1[i][j]!=0){
                wynik = false;
            }
        }
    }
    return wynik;
}

void swap(int *wartosca,int *wartoscb){
    int temp;
    temp=*wartosca;
    *wartosca=*wartoscb;
    *wartoscb=temp;
}

void sortRow(int *tab1,int ikolumn){
    for(int i=0;i<ikolumn;i++){
        for(int j=0;j<ikolumn-1;j++) {
            if (tab1[j] > tab1[j + 1]) {
                swap(tab1[j], tab1[j + 1]);
            }
        }
    }
}

void sortRowsInMatrix(int ** tab1,int iwierszy, int ikolumn){
    for(int i=0;i<iwierszy;i++){
        sortRow(tab1[i],ikolumn);
    }
}

void dobradana(int *zmienna){
    while(cin.fail())
    {   cout << "Wprowadziles bledne dane!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Wprowadz dane ponownie:" << endl;
        cin >> *zmienna;
    }
}


double **newtabdouble( int iwierszy, int ikolumn){
    double **tab = new double*[iwierszy];
    for (int i = 0; i<iwierszy; ++i){
        tab[i] = new double [ikolumn];
    }
    return tab;
}

void filltab(double ** tab, int iwierszy, int ikolumn){
    cout << "podawaj wartosci wierszami" << endl;
    for (int i = 0; i<iwierszy; ++i){
        for(int j = 0; j<ikolumn; ++j){
            cin >>tab[i][j];
            while(cin.fail())
            {   cout << "Wprowadziles bledne dane!" << endl;
                cin.clear();
                cin.ignore(1000,'\n');
                cout << "Wprowadz dane ponownie:" << endl;
                cin >> tab[i][j];
            }
        }
    }
}


void showtab(double ** tab, int iwierszy, int ikolumn){
    cout << "macierz ma nastepujace wartosci:" << endl;
    for (int i = 0; i<iwierszy; ++i){
        for(int j = 0; j<ikolumn; ++j){
            cout << tab[i][j] << "   ";
        }
        cout << endl;
    }
}

void deletetab(double ** tab, int iwierszy, int ikolumn){
    for (int i = 0; i<iwierszy; ++i) {
        delete [] tab[i];
    }
    delete [] tab;
}

void addMatrix(double ** tab1, double ** tab2, int iwierszy, int ikolumn){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab1[i][j]=tab2[i][j]+tab1[i][j];
        }
    }
}


void subtractMatrix(double ** tab1, double ** tab2, int iwierszy, int ikolumn){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab1[i][j]=tab1[i][j]-tab2[i][j];
        }
    }
}

double **multiplyMatrix(double ** tab1, double ** tab2, int iwierszy, int ikolumn, int ikolumn2){
    double **tab3=newtabdouble(iwierszy,ikolumn2);
    double wartosc;
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

void multiplyByScalar(double ** tab1,int iwierszy,int ikolumn,double skalar){
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab1[i][j]=tab1[i][j]*skalar;
        }
    }
}

double **transpozeMatrix(double ** tab1,int iwierszy,int ikolumn){
    double **tab2=newtabdouble(ikolumn,iwierszy);
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            tab2[j][i]=tab1[i][j];
        }
    }
    return tab2;
}

void powerMatrix(double ** tab1,int iwierszy, int ikolumn, int unsigned potega){
    if(iwierszy!=ikolumn){
        cout << "potegowac mozna jedynie macierze kwadratowe" << endl;
    }else{
        double wartosc;
        if(potega==0){
            for (int i = 0; i<iwierszy; i++){
                for(int j = 0; j<iwierszy; j++){
                    if(i==j){
                        tab1[i][j]=1;
                    }
                    else{
                        tab1[i][j]=0;
                    }
                }
            }
        }else {
            double **tab2=newtabdouble(iwierszy,iwierszy);
            double **tab3=newtabdouble(iwierszy,iwierszy);
            for (int i = 0; i<iwierszy; i++){
                for(int j = 0; j<iwierszy; j++){
                    tab2[i][j]=tab1[i][j];
                    tab3[i][j]=tab1[i][j];
                }
            }
            for (int unsigned l = 0; l < potega-1; l++) {
                for (int i = 0; i<iwierszy; i++){
                    for(int j = 0; j<iwierszy; j++){
                        wartosc=0;
                        for(int k = 0; k < iwierszy; k++){
                            wartosc=wartosc+tab1[i][k]*tab2[k][j];
                        }
                        tab3[i][j]=wartosc;
                    }
                }
            }
            for (int i = 0; i<iwierszy; i++){
                for(int j = 0; j<iwierszy; j++){
                    tab1[i][j]=tab3[i][j];
                }
            }
            deletetab(tab2,iwierszy,iwierszy);
            deletetab(tab3,iwierszy,iwierszy);
        }
    }
}

double determinantMatrix(double **tab1,int iwierszy,int ikolumn){
    if(iwierszy!=ikolumn){
        cout << "wyznacznik istnieje tylko dla macierzy kwadratowej" << endl;
        return 0;
    }else if(iwierszy==1){
        return tab1[0][0];
    }else{
        int k,j;
        double wynik=0,iloczyn;
        for (int i = 0; i<iwierszy; i++){
            k=0;
            j=i;
            iloczyn=1;
            do {
                iloczyn=iloczyn*tab1[j][k];
                k++;
                j++;
                if(k==iwierszy){
                    k=k-iwierszy;
                }
                if(j==iwierszy){
                    j=j-iwierszy;
                }
            }while(i!=j);
            wynik=wynik+iloczyn;
        }
        for (int i = iwierszy-1; i>=0; i--){
            k=0;
            j=i;
            iloczyn=1;
            do {
                iloczyn=iloczyn*tab1[j][k];
                k--;
                j++;
                if(k<0){
                    k=k+iwierszy;
                }
                if(j==iwierszy){
                    j=j-iwierszy;
                }
            }while(i!=j);
            wynik=wynik-iloczyn;
        }
        return wynik;
    }
}

bool matrixIsDiagonal(double **tab1,int iwierszy,int ikolumn){
    bool wynik=true;
    for (int i = 0; i<iwierszy; i++){
        for(int j = 0; j<ikolumn; j++){
            if(i!=j&&tab1[i][j]!=0){
                wynik = false;
            }
        }
    }
    return wynik;
}

void swap(double *wartosca,double *wartoscb){
    double temp;
    temp=*wartosca;
    *wartosca=*wartoscb;
    *wartoscb=temp;
}

void sortRow(double *tab1,int ikolumn){
    for(int i=0;i<ikolumn;i++){
        for(int j=0;j<ikolumn-1;j++) {
            if (tab1[j] > tab1[j + 1]) {
                swap(tab1[j], tab1[j + 1]);
            }
        }
    }
}

void sortRowsInMatrix(double ** tab1,int iwierszy, int ikolumn){
    for(int i=0;i<iwierszy;i++){
        sortRow(tab1[i],ikolumn);
    }
}

void dobradana(double *zmienna){
    while(cin.fail())
    {   cout << "Wprowadziles bledne dane!" << endl;
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Wprowadz dane ponownie:" << endl;
        cin >> *zmienna;
    }
}