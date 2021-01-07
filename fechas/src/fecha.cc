#include <iostream>
#include <fstream>
#include <vector>
#include <string>
//#include "funciones_fecha.h"

class Fecha{
    public:
        int dia;
        int mes;
        int anio;
};  bool operator < (const Fecha& b1, const Fecha& b2){

        return true;
}
        if(){

}

;

int main(int argc, char* argv[]){

//funcionamiento(argc,argv);
std::vector<std::string> fechas ;
std::string archivo_entrada = argv[1];
std::string archivo_salida = argv[2];
std::ifstream in_file (archivo_entrada.c_str());
std::ofstream out_file (archivo_salida.c_str());
std::string linea_archivo;
while(std::getline(in_file,linea_archivo)){
    fechas.push_back(linea_archivo);
}
int tamano_vector = fechas.size();

Fecha fecha1;
std::vector<Fecha> vector_fechas;
for(int i =0; i<tamano_vector;i++){
    fecha1.dia = stoi(fechas[i].substr(0,2));
    fecha1.mes = stoi(fechas[i].substr(3,5));
    fecha1.anio = stoi(fechas[i].substr(6,8));
    vector_fechas.push_back(fecha1);
}
/*for (int i=0; i<tamano_vector;i++){
    std::cout<<vector_fechas[i].dia<<"/";
    std::cout<<vector_fechas[i].mes<<"/";
    std::cout<<vector_fechas[i].anio<<std::endl;

}*/

    return 0;
}