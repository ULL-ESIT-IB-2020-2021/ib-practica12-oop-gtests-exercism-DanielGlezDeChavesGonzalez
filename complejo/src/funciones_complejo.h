/**
 * @file funciones_complejo.h
 * @author your name (you@domain.com)
 * @brief Archivo de cabecera que almacena la declaracion de funciones
 * 
 * @version 0.1
 * @date 2021-01-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef funciones_complejo_h_included
#define funciones_complejo_h_included

/**
 * @brief Declaracion de la funcion que comprueba la correcta ejecucion del programa
 * 
 * @param argc 
 * @param argv 
 */
void ayuda (int argc, char* argv[]);

/**
 * @brief Creacion de la clase complejo
 * 
 */
class Complejo{
    public:
        int real;
        int imaginario;
        void print();

};

/**
 * @brief declaracion de la funcion sumar complejos
 * 
 * @param b1 
 * @param b2 
 * @return Complejo 
 */
Complejo add(const Complejo& b1, const Complejo& b2);

/**
 * @brief declaracion de la funcion restar complejos
 * 
 * @param b1 
 * @param b2 
 * @return Complejo 
 */
Complejo sub(const Complejo& b1, const Complejo& b2);

#endif