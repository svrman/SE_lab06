#include  <iostream>
#include   <cmath>
#include "mycomplex.h"
using namespace std;
/**
 *@param a_Re - Real part of complex value
 *@param a_Im - Imagine part of complex value
 */
Complex::Complex(double a_Re, double a_Im) {
  Re = a_Re;
  Im = a_Im;
}

Complex::Complex(const Complex & aRval) {
  Re = aRval.Re;
  Im = aRval.Im;
}

/**@brief Destructor for class Complex. Set real and imagine to null
*/
Complex::~Complex() {
  Re = 0.0;
  Im = 0.0;
}

/**@brief Initialize field of complex class
*/
void Complex::Set(double a_Re, double a_Im) {
  Re = a_Re;
  Im = a_Im;
}

Complex::operator double() {
  return abs();
}

/**@brief Finding abs of complex value
*/
double Complex::abs() {
  return sqrt(Re * Re + Im * Im);
}

//Operators for arithmetic operations with complex values
Complex Complex::operator + (const Complex & aRval) {
  Complex Result;
  Result.Re = Re + aRval.Re;
  Result.Im = Im + aRval.Im;
  return Result;
}

Complex Complex::operator - (const Complex & aRval) {
  Complex Result;
  Result.Re = Re - aRval.Re;
  Result.Im = Im - aRval.Im;
  return Result;
}

Complex Complex::operator + (const double & aRval) {
  Complex Result;
  result.Re = Re + aRval;
  result.Im = Im;
  return Result;
}

Complex Complex::operator - (const double & aRval) {
  Complex Result( * this);

  Result.Re = Re - aRval;
  return Result;
}

Complex Complex::operator * (const Complex & aRval) {
  Complex Result;
  Result.Re = Re * aRval.Re - Im * aRval.Im;
  Result.Im = Re * aRval.Im + Im * aRval.Re;
  return Result;
}

Complex Complex::operator * (const double & aRval) {
  Complex Result;
  Result.Re = Re * aRval;
  Result.Im = Im * aRval;
  return Result;
}

Complex Complex::operator / (const double & aRval) {
  Complex Result;
  Result.Re = Re / aRval;
  Result.Im = Im / aRval;
  return Result;
}

Complex & Complex::operator += (const Complex & arval) {
  Re += arval.Re;
  Im += arval.Im;
  return *this;
}

Complex & Complex::operator -= (const Complex & aRval) {
  Re -= aRval.Re;
  Im -= aRval.Im;
  return *this;
}

Complex & Complex::operator *= (const Complex & aRval) {
  double tmpRe = Re;
  Re = Re * aRval.Re - Im * aRval.Im;
  Im = Im * aRval.Re + tmpRe * aRval.Im;
  return *this;
}

Complex & Complex::operator += (const double & aRval) {
  Re += aRval;
  return *this;
}

Complex & Complex::operator -= (const double & aRval) {
  Re -= aRval;
  return *this;

}

Complex & Complex::operator *= (const double & aRval) {
  Re *= aRval;
  Im *= aRval;
  return *this;
}

Complex & Complex::operator /= (const double & aRval) {
  Re /= aRval;
  Im /= aRval;
  return *this;
}

Complex & Complex::operator = (const Complex & aRval) {
  Re = aRval.Re;
  Im = aRval.Im;
  return *this;
}

Complex & Complex::operator = (const double & aRval) {
  Re = aRval;
  Im = 0.0;
  return *this;
}

/**
*@return stream
*/
istream & operator >> (istream & stream, Complex & aRval) {
  char tmp[256];
  stream >> aRval.Re >> aRval.Im >> tmp;
  return stream;
}

/**
*@return stream
*/
ostream & operator << (ostream & stream, Complex & aRval)
{
  stream << aRval.Re;
  if (!(aRval.Im < 0)) stream << '+';
  stream << aRval.Im << 'i';
  return stream;
}

Complex operator + (const double & aLval, const Complex & aRval) {
  Complex Result;
  Result.Re = aLval + aRval.Re;
  Result.Im = aRval.Im;
  return Result;
}

Complex operator - (const double & aLval, const Complex & aRval) {
  Complex Result;
  Result.Re = aLval - aRval.Re;
  Result.Im = -aRval.Im;
  return Result;
}

Complex operator * (const double & aLval, const Complex & aRval) {
  Complex Result;
  Result.Re = aLval * aRval.Re;
  Result.Im = aLval * aRval.Im;
  return Result;
}
