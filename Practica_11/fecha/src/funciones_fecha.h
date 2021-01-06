#include <iostream>
#include <cmath>
#include <string>

void Usage(int argc, char* argv[]);
const std::string KHelpText = "Este programa permite representar y gestionar fechas. \n El programa imprimira en el fichero de salida (tercer parámetro) las N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro) con una separación de un día entre fechas sucesivas. \n Deberá introducir dd/mm/aa N fichero_salida.txt";

class Date{
private:
    int day, month, year;
public:
    Date(int arg1, int arg2, int arg3){
        day = arg1;
        month = arg2;
        year = arg3;
    }
   void setDay(int input){
        day = input;
    }
    void setMonth(int input){
        month = input;
    }
    void setYear(int input){
        year = input;
    }
    void printYear(){
        std::cout << day << '/' << month << '/' << year << std::endl;
    }
    void isBisiesto(){
        !(year % 4) ? std::cout << "Es bisiesto" << std::endl : std::cout << "No es bisiesto"<<std::endl;
    }
};
