#include <iostream>
#include <cmath>
#include "funciones_fecha.h"
#include <string>


void Usage(int argc, char* argv[]){
  
  if  (argc != 6){
    std::cout << argv[0] <<" - Gestión de fechas "<< std::endl;
    std::cout << argv[0] <<"Modo de uso:"<< argv[0] << "dd/mm/aa N fichero_salida.txt" << std::endl;
    std::cout << "Pruebe" << argv[0] << "--help para mas información" <<std::endl;
    exit(EXIT_SUCCESS);
  }
 
std::string parameter{argv[1]};

 
 if (parameter == "--help"){
    std::cout << KHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


