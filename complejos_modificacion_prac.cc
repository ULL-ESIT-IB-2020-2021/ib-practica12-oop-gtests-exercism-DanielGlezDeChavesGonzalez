#include <iostream>
#include <string>
#include <vector>

class Complejo{
    public:
        int real={0};
        int imaginario={0};
        void print();

};
Complejo add(const Complejo& b1, const Complejo& b2){
    Complejo resultado;
    resultado.real = b1.real + b2.real;
    resultado.imaginario = b1.imaginario + b2.imaginario;
    
    return resultado;
};
Complejo sub(const Complejo& b1, const Complejo& b2){
    Complejo resultado;
    resultado.real = b1.real - b2.real;
    resultado.imaginario = b1.imaginario - b2.imaginario;
    
    return resultado;
};
void Complejo::print(){
    std::cout<<real<<" "<<imaginario<<"i"<<std::endl;

};



int main(){


    Complejo complejo1{0,2}, complejo2 {6};
    Complejo resultado;
    resultado= add(complejo1,complejo2);
    resultado.print();
    resultado= sub(complejo1, complejo2);
    resultado.print();






}
