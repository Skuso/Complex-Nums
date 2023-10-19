#include <iostream>
#include "complex.h"
#include <tuple>

using namespace std;

complex::complex(double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
}

void complex::set_complex(double real, double imaginary) {
  this->real = real;
  this->imaginary = imaginary;
}

void complex::set_real(double real) {
  this->real = real;
}

std::tuple<double, double> complex::get_complex() const {
  return std::make_tuple(this->real, this->imaginary);
}

double complex::get_real() const{
  return real;
}

void complex::set_imaginary(double imaginary) {
  this->imaginary = imaginary;
}

double complex::get_imaginary() const {
  return imaginary;
}

complex complex::operator +(const complex& rhs) {
  complex result = complex(this->real + rhs.real,
    this->imaginary + rhs.imaginary);

  return result;
}
//complex operator *(const complex& );
//bool operator ==(const complex& );
ostream& operator <<(ostream& os, const complex& c) {
  os << "(" << c.real << ", " << c.imaginary << ")";
  return os;
}

istream& operator >>(istream& is, const complex& c) {
  is >> c.real >> c.imaginary;
  return is;
}
