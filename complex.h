#include <iostream>
#include <tuple>
#ifndef COMPLEX_H
#define COMPLEX_H

using std::ostream;
using std::istream;


class complex {

private:
// variables
double real;
double imaginary;


public:
//constructor to serve as both alternate and default
complex(double = 0, double = 0);

// complex member functions prototypes
void set_complex(double real, double imaginary);
void set_real(double real);
std::tuple<double, double> get_complex() const;
double get_real() const;
void set_imaginary(double imaginary);
double get_imaginary() const;

// overloaded operators prototypes
complex operator +(const complex& rhs);
complex operator *(const complex& );
bool operator ==(const complex& );

friend::ostream& operator <<(ostream& os, const complex& c); // overloaded cout for complex objects
friend::istream& operator >>(istream& os, const complex& c); // overloaded cin for complex objects

};

#endif
