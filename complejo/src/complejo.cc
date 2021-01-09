/**
 * @file complejo.cc
 * @author Daniel Glez de Chaves Glez
 * @brief Programa que crea dos objeto numeros complejos,
 *        y es capaz de sumarlos restarlos e imprimir
 *        el resultado
 * 
 * 
 * @version 0.1
 * @date 2021-01-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "funciones_complejo.h"




int main(int argc, char* argv[]){

    Complejo complejo1{2 ,5}, complejo2 {6, -5};
    Complejo resultado;
    /**
     * @brief almacena la suma de los complejos previamente creados
     * 
     */
    resultado= add(complejo1,complejo2);
    resultado.print();
    /**
     * @brief almacena la resta de los complejos previamente creados
     * 
     */
    resultado= sub(complejo1, complejo2);
    resultado.print();

    return 0;
}