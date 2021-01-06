/*
 * Universidad de La Laguna
 * Escuela Superior de Ingenieria y Tecnologia
 * Grado en Ingenieria Informatica
 * Informatica Basica
 *
 * @author Zarza Martín, Alberto
 * @date 26/11/2020
 * @brief .
 */



#include <iostream>
#include "funciones_complex.h"


int main (){
 
  std::cout << "Complex Numbers class" << std::endl;
  Complex complejo1(2, 3), complejo2(8, 5), resultado;
  resultado.divide(complejo1, complejo2);
  resultado.print();
  resultado.add(complejo1, complejo2);
  resultado.print();

return 0;
}