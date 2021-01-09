/**
 * @file funciones_fecha.h
 * @author Daniel Glez de Chaves Glez
 * @brief 
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
 * @brief 
 * 
 * @param argc 
 * @param argv 
 */
void funcionamiento (int argc, char* argv[]);

class Fecha{
    public:
        int dia;
        int mes;
        int anio;
        bool operator>(const Fecha& b1);
        bool bisiesto ();
};
/**
 * @brief 
 * 
 * @param fecha_para_ordenar 
 * @param tamano_vector 
 */
void Burbuja(std::vector<Fecha> &fecha_para_ordenar, int tamano_vector);







#endif 