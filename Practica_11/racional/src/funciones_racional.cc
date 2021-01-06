#include <iostream>
#include <cmath>
#include "funciones_racional.h"

#include <fstream>

void Usage(int argc, char* argv[]){
  
  if   (argc != 3){
    std::cout << argv[0] <<" -- Números Racionales "<< std::endl;
    std::cout << argv[0] <<"Modo de uso:"<< argv[0] << "./racionales fichero_entrada fichero_salida" << std::endl;
    std::cout << "Pruebe" << argv[0] << "--help para mas información" <<std::endl;
    exit(EXIT_SUCCESS);
  }
 
  std::string parameter{argv[1]};

 
 if (parameter == "--help"){
    std::cout << KHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}
