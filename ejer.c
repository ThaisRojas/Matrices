#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;

    // Solicita al usuario las dimensiones 
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    // Crea la matriz con las dimensiones dadas
    int matriz[filas][columnas];
  
    // Inicia la matriz con ceros
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = 0;
        }
    }
}