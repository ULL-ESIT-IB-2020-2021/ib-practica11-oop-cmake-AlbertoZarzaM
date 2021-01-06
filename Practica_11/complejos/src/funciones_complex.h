#include <math.h>
#include <stdlib.h>
#include <fstream>  

class Complex{
private:
    double real_, imag;
public:
    Complex(int arg1 = 0, int arg2 = 0){   
        real_ = arg1;
        imag = arg2;
    }
    void add(Complex comp1, Complex comp2){
        real_ = comp1.real_ + comp2.real_;
        imag = comp1.imag + comp2.imag;
    }
    void subst(Complex comp1, Complex comp2){
        real_ = comp1.real_ - comp2.real_;
        imag = comp1.imag - comp2.imag;
    }
    void multiplicate(Complex comp1, Complex comp2){
        real_ = comp1.real_ * comp2.real_ + -1 * (comp1.imag * comp2.imag);
        imag = comp1.imag * comp2.real_ + comp1.real_ * comp2.imag;
    }
    void divide(Complex comp1, Complex comp2){
        Complex conjugate_comp(comp2.real_, -1*comp2.imag); 
        double denom = pow(comp2.real_, 2) + pow(comp2.imag, 2);
        real_ = (comp1.real_ * conjugate_comp.real_ + -1 * (comp1.imag * conjugate_comp.imag)) / denom;
        imag = (comp1.imag * conjugate_comp.real_ + comp1.real_ * conjugate_comp.imag) / denom;
        //std::cout << comp1.real_ * conjugate_comp.real_ + -1 * (comp1.imag * conjugate_comp.imag) << "/" << denom << " + " << comp1.imag * conjugate_comp.real_ + comp1.real_ * conjugate_comp.imag << "/" << denom << "i" << " ~= ";
    }
    void print(){
      std::cout << real_ << " + " << imag << "i" << std::endl;
    }
};
