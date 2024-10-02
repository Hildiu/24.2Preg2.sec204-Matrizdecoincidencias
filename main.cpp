/*---------------------------------------------------------------------------
 * Dato de Entrada: filas, col (int)
 * Dato de salida:  m1, m2, m3 son matrices de enteros. 3 matrices dinamicas
 --------------------------------------------------------------------------*/


#include "UFunciones.h"

int main()
{ miEntero filas, col;

  srand(time(nullptr));
  cout << "Filas   : "; cin >> filas;
  cout << "Columnas: "; cin >> col;
  miEntero **pM1 = dimensionarMatriz(filas, col);
  llenarDatos(pM1,filas, col);
  imprimirMatriz(pM1, filas, col);
  cout << "\n\n";
  //---- creamos la m2
  miEntero **pM2 = dimensionarMatriz(filas, col);
  llenarDatos(pM2, filas, col);
  imprimirMatriz(pM2, filas, col);
  cout << "\n\n";
  //--- con la tercera matriz
  miEntero  **pM3 = dimensionarMatriz(filas, col);
  matrizDeCoincidencias(pM1, pM2, pM3, filas, col);
  imprimirMatriz(pM3, filas,col);
  liberar(pM1, filas, col);
  liberar(pM2, filas, col);
  liberar(pM3, filas, col);
    return 0;
}
