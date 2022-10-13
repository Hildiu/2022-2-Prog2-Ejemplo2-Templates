//
// Created by MARIA HILDA BERMEJO RIOS
//

#ifndef EJEMPLO1_CRECTANGULO_H
#define EJEMPLO1_CRECTANGULO_H

#include "Tipos.h"

class CRectangulo
{ private:
    tdecimal largo;
    tdecimal ancho;
  public:
    CRectangulo(tdecimal _largo, tdecimal _ancho): largo(_largo), ancho(_ancho){}
    virtual ~CRectangulo(){};
    void setLargo(tdecimal _largo){ largo = _largo;}
    tdecimal getLargo(){return largo;}
    void setAncho(tdecimal _ancho)  { ancho = _ancho;}
    tdecimal getAncho(){ return ancho;}

    tarea area();
    tdecimal perimetro();
};


#endif //EJEMPLO1_CRECTANGULO_H
