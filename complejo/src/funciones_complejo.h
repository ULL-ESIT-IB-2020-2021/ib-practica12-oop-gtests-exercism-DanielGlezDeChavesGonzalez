/**
 * @file funciones_complejo.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef funciones_complejo_h_included
#define funciones_complejo_h_included

void ayuda (int argc, char* argv[]);

class Complejo{
    public:
        int real;
        int imaginario;
        void print();

};


Complejo add(const Complejo& b1, const Complejo& b2);

Complejo sub(const Complejo& b1, const Complejo& b2);

#endif