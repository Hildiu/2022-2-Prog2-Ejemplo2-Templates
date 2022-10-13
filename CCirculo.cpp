//
// Created by MARIA HILDA BERMEJO RIOS .
//

#include "CCirculo.h"

tarea CCirculo::area()
{
  return PI*radio*radio;
}

tdecimal CCirculo::perimetro()
{
  return 2*PI*radio;
}