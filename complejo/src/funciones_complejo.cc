/**
 * @file funciones_complejo.cc
 * @author Daniel Glez de Chaves Glez
 * @brief Archivo que almacena el codigo de las funciones del archivo de cabecera
 * 
 * @version 0.1
 * @date 2021-01-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include "funciones_complejo.h"


/**
 * @brief Funcion de suma de complejos
 * 
 * @param b1 
 * @param b2 
 * @return Complejo 
 */
Complejo add(const Complejo& b1, const Complejo& b2){
    Complejo resultado;
    resultado.real = b1.real + b2.real;
    resultado.imaginario = b1.imaginario + b2.imaginario;
    
    return resultado;
}

/**
 * @brief Funcion de resta de complejos
 * 
 * @param b1 
 * @param b2 
 * @return Complejo 
 */
Complejo sub(const Complejo& b1, const Complejo& b2){
    Complejo resultado;
    resultado.real = b1.real - b2.real;
    resultado.imaginario = b1.imaginario - b2.imaginario;
    
    return resultado;
}

/**
 * @brief Funcion para imprimir complejos
 * 
 */
void Complejo::print(){
    std::cout<<real<<" "<<imaginario<<"i"<<std::endl;

}

/**
 * @brief Funcion que comprueba la correcta ejecutacion del programa
 * 
 * @param argc 
 * @param argv 
 */
void ayuda (int argc, char* argv[]){
    if(argc!= 1){
        std::cout<<"Numero incorrecto de parametros"<<std::endl;
        std::cout<<"Para más ayuda pruebe: "<<argv[0]<<" --help"<<std::endl;
        exit(EXIT_SUCCESS);
    }
    if (argc == 2){
        if(argv[1]=="--help"){
            std::cout<<"Este programa calcula suma,resta de numeros complejos e imprime el resultado"<<std::endl;
            std::cout<<"Metodo de uso: "<<argv[0]<<std::endl;
            exit(EXIT_SUCCESS);
        }
        
    }
}