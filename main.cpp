#include <iostream>
#include "CRectangulo.h"
#include "CCirculo.h"

using namespace std;

void imprimir(CRectangulo & objeto)
{//-------------------------------
  cout << "El area es : " << objeto.area() << "\n";
  cout << "El perimetro es: " << objeto.perimetro() << "\n";
}

void imprimir(CCirculo & objeto)
{//----------------------------
  cout << "El area es : " <<objeto.area() << "\n";
  cout << "El perimetro es: " << objeto.perimetro() << "\n";
}

template <typename Tipo>
void imprimir(Tipo &objeto)
{//------------------------
  cout << "El area es : " << objeto.area() << "\n";
  cout << "El perimetro es: " << objeto.perimetro() << "\n";
}

int main()
{
  CRectangulo R(50.5,25.2);
  CCirculo    C(17.90);

  cout << "\nDel Rectangulo\n";
  imprimir(R);
  cout << "\nDel Circulo\n";
  imprimir(C);

  cout << "\n\nUsando el template \n";
  cout << "\nDel Rectangulo\n";
  imprimir<CRectangulo>(R);
  cout << "\nDel Rectangulo\n";
  imprimir<CCirculo>(C);
}
