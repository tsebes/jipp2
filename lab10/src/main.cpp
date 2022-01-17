//
// Created by sebiz on 04.01.2022.
//


#include <iostream>

using namespace std;

template<typename T>
T minS(T a, T b) {
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

template<typename T>
T maxS(T a, T b) {
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

template<typename T>
void printarrayS(T *a,int size) {
    cout << "Array:" << endl;
    for(int i=0;i<size;++i){
        cout << a[i] << "  ";
    }
    cout << endl;
}

template<typename T>
void printmatrixS(T *a,int width, int height) {
    cout << "Matrix:" << endl;
    for(int i=0;i<width;++i){
        for (int j=0;j<height;++j) {
            cout << a[i][j] << "  ";
        }
        cout << endl;
    }
}


int main() {

  cout << "minimum: " << minS<int>(5,7) << endl;
  cout << "minimum: " << minS<double>(5.5,5.4) << endl;
  cout << "maximum: " << maxS<int>(5,7) << endl;
  cout << "maximum: " << maxS<double>(5.5,5.4) << endl;

  int a[10] = {1,2,3,4,5,11,12,13,14,15};
  int tab[3][2] = {{1,2},{2,3},{3,4}};

  double b[10] = {1.5,2,3.3,4,5.5,11.1,12.6,13,14.7,15};
  double tab2[3][2] = {{1.5,2},{2.3,3},{3.4,4}};
  printarrayS(a,10);
  printarrayS(b,10);
  printmatrixS(tab,3,2);
  printmatrixS(tab2,3,2);


}
