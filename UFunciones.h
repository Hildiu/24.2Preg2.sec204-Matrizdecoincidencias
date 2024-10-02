//
// Created by mbermejo on 2/10/2024.
//

#ifndef INC_02_PROYECTO_UFUNCIONES_H
#define INC_02_PROYECTO_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace  std;

typedef int miEntero;

miEntero **   dimensionarMatriz(miEntero filas, miEntero col);
void llenarDatos(miEntero **pMatriz, miEntero filas, miEntero col);
void   imprimirMatriz(miEntero **pMatriz, miEntero filas, miEntero col);
void  matrizDeCoincidencias(miEntero **pM1, miEntero **pM2, miEntero** pM3, miEntero filas, miEntero col);
void liberar(miEntero ** & pMatriz, miEntero filas,  miEntero col);


#endif //INC_02_PROYECTO_UFUNCIONES_H
