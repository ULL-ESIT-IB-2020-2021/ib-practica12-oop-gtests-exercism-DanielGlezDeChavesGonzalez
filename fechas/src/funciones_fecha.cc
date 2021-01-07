#include <iostream>


void funcionamiento (int argc, char* argv[]){

if (argc== 2){
std::string ayuda ={"--help"};
    if(argv[1]==ayuda){
    std::cout<<"Este programa ordena fechas dadas en fichero de entrada y las entrega en orden cronologico ascendente en el fichero de salida"<<std::endl;
    std::cout<<"Modo de uso: ./fechas fichero _entrada.txt fichero_salida.txt"<<std::endl;
    exit(EXIT_SUCCESS);
    }
}
if (argc =! 3){
    std::cout<<"Error de ejecucion, numero incorrecto de parametros."<<std::endl;
    std::cout<<"./fechas - Gestión de fechas"<<std::endl;
    std::cout<<"Pruebe ./fechas --help para más información. "<<std::endl;
    exit(EXIT_SUCCESS);
}





}
