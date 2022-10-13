//
// Created by MARIA HILDA BERMEJO RIOS
//

#ifndef EJEMPLO1_CCIRCULO_H
#define EJEMPLO1_CCIRCULO_H
#include "Tipos.h"

class CCirculo
{
private:
    tdecimal radio;
public:
    CCirculo(tdecimal _radio):radio(_radio){};
    virtual ~CCirculo(){};
    void  getRadio(tdecimal _radio) { radio =_radio;}
    tdecimal setRaio(){ return radio;}

    tarea area();
    tdecimal perimetro();
};


#endif //EJEMPLO1_CCIRCULO_H
