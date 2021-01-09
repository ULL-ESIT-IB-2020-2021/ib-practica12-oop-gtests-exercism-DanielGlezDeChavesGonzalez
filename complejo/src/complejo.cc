#include <iostream>
#include "funciones_complejo.h"




int main(int argc, char* argv[]){

    Complejo complejo1{2 ,5}, complejo2 {6, -5};
    Complejo resultado;
    resultado= add(complejo1,complejo2);
    resultado.print();
    resultado= sub(complejo1, complejo2);
    resultado.print();

    return 0;
}