/**
 * @file fecha.cc
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


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "funciones_fecha.h"


int main(int argc, char* argv[]){
    /**
     * @brief Construct a new funcionamiento object
     * 
     */
    funcionamiento(argc,argv);
    std::vector<std::string> fechas ;
    std::ifstream in_file (argv[1]);
    std::ofstream out_file (argv[2]);
    std::string linea_archivo;
    while(std::getline(in_file,linea_archivo)){
        fechas.push_back(linea_archivo);
    }
    int tamano_vector = fechas.size();
    std::vector<Fecha> vector_fechas;
    for(int i =0; i<tamano_vector;i++){
        Fecha fecha1;
        fecha1.dia = stoi(fechas[i].substr(0,2));
        fecha1.mes = stoi(fechas[i].substr(3,5));
        fecha1.anio = stoi(fechas[i].substr(6,8));
        vector_fechas.push_back(fecha1);
    }
    /**
     * @brief Construct a new Burbuja object
     * 
     */
    Burbuja(vector_fechas,tamano_vector);
    for (int i=1; i<=tamano_vector;i++){
        out_file<<vector_fechas[i].dia;
        out_file<<"/";
        out_file<<vector_fechas[i].mes;
        out_file<<"/";
        out_file<<vector_fechas[i].anio;
        out_file<<std::endl;
    }
    return 0;
}