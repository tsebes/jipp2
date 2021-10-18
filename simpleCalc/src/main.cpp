//
// Created by sebiz on 18.10.2021.
//

#include <iostream>
#include <string>
#include "calc.h"

using namespace std;

int main(int argc, char* argv[]){
    string action;
    string char_a, char_b;
    float a,b;
    if(argc>1){
        action=argv[1];
        if(action=="add"){
            if(argc==4){
                char_a=argv[2];
                char_b=argv[3];
                a=stof(char_a);
                b=stof(char_b);
                cout << add(a,b) << endl;
            }
            else{
                help();
            }
        }
        else if(action=="substract") {
            if (argc == 4) {
                char_a = argv[2];
                char_b = argv[3];
                a = stof(char_a);
                b = stof(char_b);
                cout << add(a, b) << endl;
            } else {
                help();
            }
        }
        else if(action=="volume"){
            if(argc==6){
                string char_h, char_height;
                float h, height;
                char_a = argv[2];
                char_b = argv[3];
                char_h = argv[4];
                char_height = argv[5];
                a = stof(char_a);
                b = stof(char_b);
                h = stof(char_h);
                height = stof(char_height);
                cout << volume(a, b, h, height) << endl;
            }
            else{
                help();
            }
        }
            else if(action=="help"){
                help ();
            }
            else{
                help ();
            }
        }
        else{
         help ();
        }
    }

