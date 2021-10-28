//
// Created by sebiz on 28.10.2021.
//

#include <iostream>
#include <string>
#include "matrixLib/lib.h"

using namespace std;

int main(int argc, char* argv[]){
    string action;
    if(argc>1) {
        action = argv[1];

    }
    else{
        cout << "nie wybrano funkcji" << endl;
        help(0);
    }

    system ("pause");
}

