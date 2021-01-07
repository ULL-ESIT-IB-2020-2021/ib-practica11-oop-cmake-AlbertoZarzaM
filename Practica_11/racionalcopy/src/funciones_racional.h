#include <iostream>
#include <math.h>
#include <fstream>

void Usage(int argc, char* argv[]);
const std::string KHelpText = "./racionales -- Números Racionales \n Modo de uso: ./racionales fichero_entrada fichero_salida \n \n fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio fichero_salida:  \n Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`\n";
//void Lectura_archivo (std::string parameter2, std::string contenedor);



 class Racional{
 private:
  double num_, denom_;
 public:
  Racional(double arg1 = 0, double arg2 = 0){   
    num_ = arg1;
    denom_ = arg2;
  }
  
  void reduceFraction (){
  for (double i = denom_ * num_; i > 1; i--) {
    if ((fmod(denom_, i) == 0) && (fmod(num_, i) == 0)) {  
      num_ /= i;  
      denom_ /= i;  
    }   
  }
  while(fmod(num_, 10) == 0 && fmod(denom_, 10) == 0){
    num_ /= 10;
    denom_ /= 10;
  }

  }
  void add(Racional rac1, Racional rac2, std::string parameter1){
    std::cout << rac1.num_ << "/" << rac1.denom_ << " + " << rac2.num_ << "/" << rac2.denom_ << " = ";
    float num1 = rac1.num_;
    float denom1 = rac1.denom_;
    float num2 = rac2.num_;
    float denom2 = rac2.denom_;

    num_ = denom2 * num1 + denom1 * num2;
    denom_ = denom1 * denom2;
    reduceFraction();
    
    std::ofstream archivo;
    archivo.open(parameter1, std::ios::app);

    if(archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << std::endl;
      exit(1);
    }
    archivo <<  num_ << "/" << denom_ << " ";
    
    archivo.close();
    
  }
  void subst(Racional rac1, Racional rac2, std::string parameter1){
    std::cout << rac1.num_ << "/" << rac1.denom_ << " - " << rac2.num_ << "/" << rac2.denom_ << " = ";
    float num1 = rac1.num_;
    float denom1 = rac1.denom_;
    float num2 = rac2.num_;
    float denom2 = rac2.denom_;

    num_ = denom2 * num1 - denom1 * num2;
    denom_ = denom1 * denom2;
    reduceFraction();
    std::ofstream archivo;
    archivo.open(parameter1, std::ios::app);

    if(archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << std::endl;
      exit(1);
    }
    archivo << num_ << "/" << denom_ << " ";
    
    archivo.close();
  }
  void multiplicate(Racional rac1, Racional rac2, std::string parameter1){
    std::cout << rac1.num_ << "/" << rac1.denom_ << " * " << rac2.num_ << "/" << rac2.denom_ << " = ";
    float num1 = rac1.num_;
    float denom1 = rac1.denom_;
    float num2 = rac2.num_;
    float denom2 = rac2.denom_;

    num_ = num1 * num2;
    denom_ = denom1 * denom2;
    reduceFraction();
    std::ofstream archivo;
    archivo.open(parameter1, std::ios::app);

    if(archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << std::endl;
      exit(1);
    }
    archivo <<  num_ << "/" << denom_ << " ";
    
    archivo.close();
  }
  void divide(Racional rac1, Racional rac2, std::string parameter1){
    std::cout << rac1.num_ << "/" << rac1.denom_ << " : " << rac2.num_ << "/" << rac2.denom_ << " = ";
    float num1 = rac1.num_;
    float denom1 = rac1.denom_;
    float num2 = rac2.num_;
    float denom2 = rac2.denom_;
    num_ = num1 * denom2;
    denom_ = num2 * denom1;
    reduceFraction();
    std::ofstream archivo;
    archivo.open(parameter1, std::ios::app);

    if(archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << std::endl;
      exit(1);
    }
    archivo << num_ << "/" << denom_ << " ";
    
    archivo.close();
  }

  void half(int num1,int num2 ,int num3, int num4, int denm1, int denm2, int denm3, int denm4,std::string parameter1){
    num_=(num1+num2+num3+num4)/4;
    denom_=(denm1+denm2+denm3+denm4)/4;
    reduceFraction();
    
    std::ofstream archivo;
    archivo.open(parameter1, std::ios::app);

    if(archivo.fail()){
      std::cout << "No se pudo abrir el archivo" << std::endl;
      exit(1);
    }
    archivo <<  num_ << "/" << denom_ << " ";
    
    archivo.close();
    
  }
  void print(){
    std::cout <<num_<< "/"<<denom_<< std::endl;
  }
  
};