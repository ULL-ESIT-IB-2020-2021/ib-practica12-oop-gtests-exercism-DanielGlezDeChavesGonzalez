/**
 * @file funciones_fecha.h
 * @author Daniel Glez de Chaves Glez
 * @brief archivo de cabecera que contiene la declaracion de las funciones
 * 
 * 
 * 
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef funciones_fecha_h_included
#define funciones_fecha_h_included

#include <iostream>
#include <string>
#include <vector>

/**
 * @brief declaracion de la funcion que revisa el correcto llamamiento del programa
 * 
 * @param argc 
 * @param argv 
 */
void funcionamiento (int argc, char* argv[]);

/**
 * @brief declaracion de la clase fecha
 * 
 */
class Fecha{
    public:
        int dia;
        int mes;
        int anio;
        bool operator>(const Fecha& b1);
        bool bisiesto ();
};
/**
 * @brief declaracion de la funcion algoritmo de ordenacion burbuja
 * 
 * @param fecha_para_ordenar 
 * @param tamano_vector 
 */
void Burbuja(std::vector<Fecha> &fecha_para_ordenar, int tamano_vector);







#endif 