#include <iostream>
#include "funciones_complejo.h"



Complejo add(const Complejo& b1, const Complejo& b2){
    Complejo resultado;
    resultado.real = b1.real + b2.real;
    resultado.imaginario = b1.imaginario + b2.imaginario;
    
    return resultado;
}

Complejo sub(const Complejo& b1, const Complejo& b2){
    Complejo resultado;
    resultado.real = b1.real - b2.real;
    resultado.imaginario = b1.imaginario - b2.imaginario;
    
    return resultado;
}

void Complejo::print(){
    std::cout<<real<<" "<<imaginario<<"i"<<std::endl;

}

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