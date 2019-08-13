//
// Created by josé djalma da cunha júnior on 2019-08-13.
//

#ifndef MULTIPLICA_MATRIZ_MULTIPLICA_HPP
#define MULTIPLICA_MATRIZ_MULTIPLICA_HPP
#include <iostream>
using namespace std;

class Multiplica {

public:

    void conta(){
        int m1,m2,mr;
        for (int i = 0; i < 3; i++) {//linha
            for (int j = 0; j < 3; j++) {//coluna
                for (int k = 0; k < 3; k++) {
                    matR[i][j] = (mat1[i][k] * mat2[k][j]) + matR[i][j];
                }
                m1 = mat1[i][j],m2 = mat2[j][i], mr = matR[i][j];
            }
        }
    }

    void popula() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matR[i][j] = 0;
                mat1[i][j] = i+j;
                mat2[i][j] = i*2;
            }
        }
    }

    void imprime(){
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout<<mat1[i][j]<<" ";
            }
            puts("");
        }
        puts("mat1");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout<<mat2[i][j]<<" ";
            }
            puts("");
        }
        puts("mat2");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout<<matR[i][j]<<" ";
            }
            puts("");
        }
        puts("matR");
    }

private:
    double mat1[3][3];
    double mat2[3][3];
    double matR[3][3];
};


#endif //MULTIPLICA_MATRIZ_MULTIPLICA_HPP
