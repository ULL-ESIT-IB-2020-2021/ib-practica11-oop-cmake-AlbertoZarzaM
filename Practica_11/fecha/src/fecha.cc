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
#include <stdlib.h>
#include <fstream>  
#include "funciones_fecha.h"



int main(int argc, char* argv[]){

  Usage(argc, argv);
  
  std::string parameter1{argv[1]},parameter2{argv[2]}, parameter3{argv[3]}, parameter4{argv[4]}, parameter5{argv[5]};
  int day=stoi(parameter1);
  int month=stoi(parameter2);
  int year=stoi(parameter3);
  int N = stoi (parameter4);
  
  const std::string kFilename = parameter5;
  std::ofstream outfile (kFilename);
  if (!outfile.is_open()) { 
    return EXIT_FAILURE; 
  }
    
  Date myDate_obj (day, month, year);  
  std::cout << "- - - Date class - - -" << std::endl;
    
  myDate_obj .printYear();
  myDate_obj.isBisiesto();
    
    
  for (int i = 0; i < N; i++)
  {
    outfile << day++ << '/' << month << '/' << year << std::endl;
  }

return 0;  
}

