//
// Created by sebiz on 11.01.2022.
//

#ifndef LAB10_EXCEPTIONS_H
#define LAB10_EXCEPTIONS_H

#include <exception>
#include <string>

using namespace std;

class exceptions: public exception {
    string description;
    enum errortype{
        FILE_ERROR,
        TOTAL_ERROR_AMOUN
    };
public:
    exceptions(string description);
    const char *what() const override;

};


#endif //LAB10_EXCEPTIONS_H
