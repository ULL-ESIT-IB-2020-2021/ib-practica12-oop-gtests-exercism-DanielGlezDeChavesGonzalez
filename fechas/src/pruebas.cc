#include <iostream>
#include <string>
#include <vector>

class Fecha{
public:
    int dia;
    int mes;
    int anio;
    
};

int main(){



std::vector<std::string> fechas= {"20/04/50","10/08/20","24/12/99","06/02/28","12/05/20"};
int largo = fechas.size();
std::cout<<largo<<std::endl;
int n= 1;
while(n<=largo){
    int dia_posible = stoi(fechas[n].substr(0,2));
    int mes_posible = stoi(fechas[n].substr(3,5));
    int anio_posible = stoi(fechas[n].substr(6,8));
    Fecha fecha;
    fecha.dia = dia_posible;
    fecha.mes = mes_posible;
    fecha.anio = anio_posible;
    std::cout<<fecha<<std::endl;
n=n++;
}

    return 0;
}