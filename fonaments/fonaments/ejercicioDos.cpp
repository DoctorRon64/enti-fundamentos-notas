#include "ejercicioDos.h"

#define amountArray3 100
#define amountArray4 200
#define amountArray5y6 10
#include <iostream>
#include <random>

int ejercicioDos() {
    float array1[7] = { 4.2, 3.44, 8.13, 9.0, 3.1, 0.0, 0.0 };
    
    float array2[3] = { 1, 2, 53423323424 };
    array2[2] = array2[0] + array2[1];
    std::cout << array2[2] << std::endl;
    
    //============ ejercicio 2 ==================================
    float array3[amountArray3] = {};
    for (int i = 0; i < amountArray3; i++) {
        array3[i] = i;
        std::cout << array3[i] << std::endl;
    }
    
    //============ ejercicio 3 ==================================
    float array4[amountArray4];
    for (int i = 0; i < amountArray4; i++) {
        array4[i] *= i;
    }
    for (int i = amountArray4 - 1; i > 0; i--) {
        std::cout << array4[i] << std::endl;
    }
    
    //=============== ejercicio 4 ===============
    float array5[amountArray5y6] = {};
    float array6[amountArray5y6] = {};
    for (int i = 0; i < amountArray5y6; i++) {
        array6[i] = array5[amountArray5y6 - 1 -i];
        std::cout << array6[i] << std::endl;
    }
    
    //============= ejercicio 5 ====================
    short numeroFilas;
    short numeroEscribir = 1;
    
    std::cout << "Ingeresar numero patron:" << std::endl;
    std::cin >> numeroFilas;
    
    for (int i = 0; i < numeroFilas; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << numeroEscribir << " ";
            numeroEscribir++;
        }
        std::cout << "\n"; 
    }

    //===6=========================================================
    short inicio, fin;
    
    std::cout << "Primer numero" << std::endl;
    std::cin >> inicio;
    
    std::cout << "Segundo numero" << std::endl;
    std::cin >> fin;
    
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            continue;
        }
    
        if (i % 7 == 0) {
            break;
        }
    
        std::cout << i << std::endl;
    }
    
    ///7================================================================
    const int N = 50;
    int matrix[N][N];
    std::srand(std::time(NULL));
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = std::rand();
            std::cout << matrix[i][j] << " en fila: " << j << " en columna: " << j << std::endl;
        }
    }

    //================================================================
    const int width = 10;
    int matrix2[width][20];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix2[i][j] = i * j;
        }
    }
   
    //for (int i = 0; i < N; ++i) {
    //    for (int j = 0; j < N; ++j) {
    //        std::cout << width << matrix[i][j];
    //    }W
    //    std::cout << '\n';                // end of row
    //}
    //std::cout << matrix[0][0] << ' ' << matrix[49][49] << '\n';

    return 0;
}