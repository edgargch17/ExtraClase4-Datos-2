//
// Created by edgargonza on 16/05/19.
//

#ifndef ALGORITMO_N_REINAS_NREINAS_H
#define ALGORITMO_N_REINAS_NREINAS_H

#include <iostream>

#define N 3

using namespace std;

class NReinas {

private:
    int tablero[N][N];

public:
    NReinas();
    void Mostrar();
    bool Resolver(int columna);
    bool Verificar(int fila, int columna);
    int Ejecutar(int n);
};
#endif //ALGORITMO_N_REINAS_NREINAS_H
