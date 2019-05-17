//
// Created by edgargonza on 16/05/19.
//

#include "NReinas.h"

NReinas::NReinas() {
    tablero[N][N]=0;
}

void NReinas::Mostrar() {

    int f,c;

    for (f=0;f<N;f++){
        for (c=0;c<N;c++){
            cout<<"["<<tablero[f][c]<<"]";
        }
        cout<<endl;
    }
    cout<<'\n'<<endl;
}

bool NReinas::Resolver(int columna) {

    int i;

    if (columna>=N){
        return true;
    }

    for (i=0;i<N;i++){

        if (Verificar(i,columna)==true){

            Mostrar();

            tablero[i][columna]=1;

            if (Resolver(columna+1)==true){
                return true;
            }

            tablero[i][columna]=0;

        }


    }

    return false;
}

bool NReinas::Verificar(int fila, int columna) {

    int f,c;

    for(c=0;c<columna;c++){
        if (tablero[fila][c]==1){
            return false;
        }
    }

    for (f=fila, c=columna; f>=0 && c>=0; f--,c--){
        if (tablero[f][c]==1){
            return false;
        }
    }

    for (f=fila, c=columna; c>=0 && f<N; f++,c--){
        if (tablero[f][c]==1){
            return false;
        }
    }

    return true;
}

int NReinas::Ejecutar(int n) {

    if (Resolver(n)==false){
        cout<<"No existe solucion"<<endl;
    }

    else{
        Mostrar();
    }

    return 0;
}