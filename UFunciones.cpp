//
// Created by mbermejo on 2/10/2024.
//

#include "UFunciones.h"

miEntero **   dimensionarMatriz(miEntero filas, miEntero col)
{ miEntero ** pMatriz= nullptr;

    pMatriz = new miEntero*[filas];
    for(miEntero f=0; f<filas; f++)
        pMatriz[f] = new miEntero[col];
    return pMatriz;
}


void llenarDatos(miEntero **pMatriz, miEntero filas, miEntero col)
{
    for(int f=0; f<filas; f++)
        for(int c=0; c<col; c++)
            pMatriz[f][c] = rand() % 9 +1;
}


void   imprimirMatriz(miEntero **pMatriz, miEntero filas, miEntero col)
{
    for(int f=0; f<filas; f++)
    {
        for(int c=0; c<col; c++)
            cout << setw(5) << pMatriz[f][c];
        cout << "\n";
    }
}


void  matrizDeCoincidencias(miEntero **pM1, miEntero **pM2, miEntero** pM3, miEntero filas, miEntero col)
{
   for(miEntero f=0; f<filas; f++)
       for(miEntero c=0; c<col; c++)
           if( pM1[f][c] == pM2[f][c])
               pM3[f][c] = 1;
           else
               pM3[f][c] = 0;
}

void liberar(miEntero ** & pMatriz, miEntero filas,  miEntero col)
{
    for(miEntero f=0; f<filas; f++)
        delete []pMatriz[f];
    delete []pMatriz;
    pMatriz = nullptr;
}