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

#include <fstream> 
#include <iostream>
#include "funciones_racional.h"
#include <string>

int main (int argc, char* argv[]){
   
Usage(argc, argv);
  
  std::string parameter1{argv[1]},parameter2{argv[2]},contenedor;
  int numerador1(0),numerador2(0),denominador1(0),denominador2(0);
  std::cout << "Racional Numbers class" << std::endl; 
   
  std::ifstream fichero_datos {parameter2};

  if (!fichero_datos){
    std::cerr << "No se puede abrir el archivo"<<std::endl;
    return 1;
   } 
  fichero_datos>>numerador1;
  fichero_datos.ignore()>>denominador1;
  fichero_datos.ignore('/',' ')>>numerador2;
   
  fichero_datos.ignore(' ','/')>>denominador2;
  
  //Usar para debug
   /* std::cout<<numerador1<<std::endl;
    std::cout<<denominador1<<std::endl;
    std::cout<<numerador2<<std::endl;;
    std::cout<<denominador2<<std::endl;*/

  Racional myrac(numerador1,denominador1), myrac2(numerador2,denominador2);
  Racional resultado_rac;
  resultado_rac.add(myrac, myrac2, parameter1);
  resultado_rac.print();
  resultado_rac.subst(myrac, myrac2, parameter1);
  resultado_rac.print();
  resultado_rac.multiplicate(myrac, myrac2, parameter1);
  resultado_rac.print();
  resultado_rac.divide(myrac, myrac2, parameter1);
  resultado_rac.print();

return 0;
}