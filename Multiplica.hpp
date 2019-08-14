//
// Created by josé djalma da cunha júnior on 2019-08-1tam.
//

#ifndef MULTIPLICA_MATRIZ_MULTIPLICA_HPP
#define MULTIPLICA_MATRIZ_MULTIPLICA_HPP
#include <iostream>
//para mudar o tamanho das matrizes (sendo elas quadradas) so mudar o numero abaixo
#define tam 4
using namespace std;

class Multiplica {

public:
    //a multiplicação
    void conta(){
        int m1,m2,mr;
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                for (int k = 0; k < tam; k++) {
                    matR[i][j] = (mat1[i][k] * mat2[k][j]) + matR[i][j];
                }
                m1 = mat1[i][j],m2 = mat2[j][i], mr = matR[i][j];
            }
        }
    }

    //popula com uma regra aleatoria, se quiser mudar nao mude o zerar o matR
    void popula() {
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                matR[i][j] = 0;
                mat1[i][j] = i+j;
                mat2[i][j] = i*2;
            }
        }
    }

    //imprime apenas para ver como estao as matrizes
    void imprime(){
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                cout<<mat1[i][j]<<" ";
            }
            puts("");
        }
        puts("mat1");
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                cout<<mat2[i][j]<<" ";
            }
            puts("");
        }
        puts("mat2");
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                cout<<matR[i][j]<<" ";
            }
            puts("");
        }
        puts("matR");
    }

private:
    //matrizes sendo a R a resposta da multiplicação
    double mat1[tam][tam];
    double mat2[tam][tam];
    double matR[tam][tam];
};


#endif //MULTIPLICA_MATRIZ_MULTIPLICA_HPP
