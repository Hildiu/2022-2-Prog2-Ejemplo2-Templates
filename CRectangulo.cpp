//
// Created by MARIA HILDA BERMEJO RIOS on 11/1/20.
//

#include "CRectangulo.h"

tarea CRectangulo::area()
{
  return largo * ancho;
}

tdecimal CRectangulo::perimetro()
{
  return 2*(largo + ancho);
}
