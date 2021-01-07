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
  int num1,num2,num3,num4,denm1,denm2,denm3,denm4;
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
  
  
  std::ifstream fichero_datos1 {parameter1};

  if (!fichero_datos1){
    std::cerr << "No se puede abrir el archivo"<<std::endl;
    return 1;
   } 
  fichero_datos1>>num1;
  fichero_datos1.ignore()>>denm1;
  fichero_datos1.ignore()>>num2;
  fichero_datos1.ignore()>>denm2;
  fichero_datos1.ignore()>>num3;
  fichero_datos1.ignore()>>denm3;
  fichero_datos1.ignore()>>num4;
  fichero_datos1.ignore()>>denm4;

  resultado_rac.half(num1,num2,num3,num4,denm1,denm2,denm3,denm4,parameter1);
  resultado_rac.print();

   
return 0;
}