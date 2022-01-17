//
// Created by sebiz on 16.11.2021.
//

#include <iostream>
//#include "Node.h"
#include "vector.h"

using namespace std;

int main(){
    //Node A(0,0);
    // Node B(6,8);
    //cout << pointsDistance(A, B) << endl;

    Vector v1(5,10), v2(5,10);
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);

    v1.print();
    v2.print();

    system ("pause");
}