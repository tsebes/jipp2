//
// Created by sebiz on 18.01.2022.
//

#include <iostream>
#include <vector>
#include <random>
#include <thread>
#include "TimeMeasure.h"

using namespace std;

void setSizeOfMatrix(vector<vector<unsigned>> *matrix, unsigned rows, unsigned columns);

void generateDataInMatrix(vector<vector<unsigned>> *matrix);

vector<vector<unsigned>> copyMatrix(vector<vector<unsigned>> *matrix);

void calculate(vector<vector<unsigned>> *matrix, vector<vector<unsigned>> *resultMatrix);

void calculatepart(vector<vector<unsigned>> *matrix, vector<vector<unsigned>> *resultMatrix, int x, int y);

int main() {
    vector<vector<unsigned>> matrix;
    TimeMeasure timer;

    setSizeOfMatrix(&matrix, 20000, 9590);

    cout<< "Generating data in matrix" << endl;

    timer.timerStart();
    generateDataInMatrix(&matrix);
    timer.timerStop();

    cout << "Generating data in matrix: " << timer.getTimerTimeInMilliseconds() << "ms" << endl;

    //system("PAUSE");

    cout<< "Copying matrix" << endl;

    timer.timerStart();
    vector<vector<unsigned>> resultsMatrix = copyMatrix(&matrix);
    timer.timerStop();

    cout << "Copying matrix: " << timer.getTimerTimeInMilliseconds() << "ms" << endl;


    cout<< "Calculations on matrix" << endl;

    timer.timerStart();
    calculate(&matrix, &resultsMatrix);
    timer.timerStop();

    cout << "Calculations on matrix: " << timer.getTimerTimeInMilliseconds() << "ms" << endl;

    return 0;
}

void setSizeOfMatrix(vector<vector<unsigned>> *matrix, unsigned rows, unsigned columns) {
    matrix->resize(rows);
    for(auto &row: *matrix) {
        row.resize(columns);
    }
}

void generateDataInMatrix(vector<vector<unsigned>> *matrix) {
    default_random_engine defEngine;
    uniform_int_distribution<unsigned> intDistro(0,2000);
    for(auto &row: *matrix) {
        for(auto &cell: row)
            cell = intDistro(defEngine);
    }
}

vector<vector<unsigned>> copyMatrix(vector<vector<unsigned>> *matrix) {
    vector<vector<unsigned>> returnMatrix;
    returnMatrix.resize(matrix->size());
    returnMatrix = *matrix;
    return move(returnMatrix);
}

void calculate(vector<vector<unsigned>> *matrix, vector<vector<unsigned>> *resultMatrix) {
   /*
    thread th1(calculatepart, matrix, resultMatrix, 1, 1);
    thread th2(calculatepart, matrix, resultMatrix, 1, 2);
    thread th3(calculatepart, matrix, resultMatrix, 2, 1);
    thread th4(calculatepart, matrix, resultMatrix, 2, 2);

    th1.join();
    th2.join();
    th3.join();
    th4.join();
    */

    for(int i = 1; i < matrix->size() - 1; ++i) {
        for(int j = 1; j < matrix->at(i).size() - 1; ++j) {
            unsigned sum = 0;
            for(int k = i - 1; k < i + 2; ++k) {
                for(int n = j - 1; n < j + 2; ++n) {
                    sum += matrix->at(k)[n];
                }
            }

            resultMatrix->at(i)[j] = sum/9;
        }
    }
}

void calculatepart(vector<vector<unsigned>> *matrix, vector<vector<unsigned>> *resultMatrix,int x, int y) {
    for(int i = 1; i < (matrix->size() - 1)*x/2; ++i) {
        for(int j = 1; j < (matrix->at(i).size() - 1)*y/2; ++j) {
            unsigned sum = 0;
            for(int k = i - 1; k < i + 2; ++k) {
                for(int n = j - 1; n < j + 2; ++n) {
                    sum += matrix->at(k)[n];
                }
            }

            resultMatrix->at(i)[j] = sum/9;
        }
    }
}