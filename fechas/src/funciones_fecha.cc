/**
 * @file funciones_fecha.cc
 * @author Daniel Glez de Chaves Glez
 * @brief archivo que contiene la definicion de las funciones del archivo cabecera
 * 
 * 
 * 
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include "funciones_fecha.h"

/**
 * @brief funcion operador < para objetos de la clase fecha
 * 
 * @param b1 
 * @return true 
 * @return false 
 */
bool Fecha::operator>(const Fecha& b1){
  if(anio>b1.anio){
    return true;
  }       
  if((anio==b1.anio)&&(mes>b1.mes)){
    return true;
  }
  if((anio==b1.anio)&&(mes==b1.mes)&&(dia>b1.dia)){
    return true;
  }
  return false;
}
/**
 * @brief funcion que calcula si el año introducido es bisiesto
 * 
 * @return true 
 * @return false 
 */
bool Fecha::bisiesto() {
    if((anio %4)==0){
        return true;
    }
    return false;
};

/**
 * @brief Función que ayuda a saber como funciona el programa
 * 
 * @param argc 
 * @param argv 
 */
void funcionamiento (int argc, char* argv[]){

  if (argc== 2){
  std::string ayuda ={"--help"};
      if(argv[1]==ayuda){
      std::cout<<"Este programa ordena fechas dadas en fichero de entrada y las entrega en orden cronologico ascendente en el fichero de salida"<<std::endl;
      std::cout<<"Modo de uso: ./fechas fichero _entrada.txt fichero_salida.txt"<<std::endl;
      exit(EXIT_SUCCESS);
      }
  }
  if (argc != 3){
      std::cout<<"Error de ejecucion, numero incorrecto de parametros."<<std::endl;
      std::cout<<"./fechas - Gestión de fechas"<<std::endl;
      std::cout<<"Pruebe ./fechas --help para más información. "<<std::endl;
      exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Funcion para ordenar las fechas usando el algoritmo de burbuja
 * 
 * @param fecha_para_ordenar 
 * @param tamano_vector 
 */
void Burbuja(std::vector<Fecha> &fecha_para_ordenar, int tamano_vector){
  int x,y;
  Fecha tmp;
  for(x = 0; x < tamano_vector; x++) {
    for(y = 0; y < tamano_vector - x; y++) {
      if(fecha_para_ordenar[y] > fecha_para_ordenar[y + 1]) {
        tmp = fecha_para_ordenar[y];
        fecha_para_ordenar[y] = fecha_para_ordenar[y + 1];
        fecha_para_ordenar[y + 1] = tmp;
      }
    }
  }
}