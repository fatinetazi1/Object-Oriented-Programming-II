/*
CH08-320143
a6 p1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include "Fraction.h"

Fraction::Fraction(){
	this->num = 1;
	this->den = 1;
}

Fraction::Fraction(int n, int d){
	if(d == 0){
		throw std::string("Invalid data or logical error");
	} else {
		this->num = n;
		this->den = d;
	}
}

Fraction::Fraction(const std::string& str){
	std::string start = str.substr(0, str.find("/"));
	std::string finish = str.substr(str.find("/")+1);
	int n = atoi(start.c_str());
	int d = atoi(finish.c_str());
	if(d == 0){
		throw std::string("Invalid data or logical error");
	} else {
		this->num = n;
		this->den = d;
	}
}

Fraction::Fraction(const Fraction& f){
	this->num = f.num;
	this->den = f.den;
}

bool Fraction::operator<(const Fraction& f){
	return (num * f.den < den * f.num);
}

bool Fraction::operator<=(const Fraction& f){
	return (num * f.den <= den * f.num);
}

bool Fraction::operator>(const Fraction& f){
	return (num * f.den > den*f.num);
}

bool Fraction::operator>=(const Fraction& f){
	return (num * f.den >= den * f.num);
}

bool Fraction::operator==(const Fraction& f){
	return (num * f.den == den * f.num);
}

bool Fraction::operator!=(const Fraction& f){
	return (num * f.den != den * f.num);
}

Fraction Fraction::operator+(const Fraction& f){
	Fraction a;
    a.num = this->num*f.den + f.num*this->den;
    a.den = this->den*f.den;
    return a;
}

Fraction Fraction::operator-(const Fraction& f){
	Fraction s;
    s.num = this->num*f.den - f.num*this->den;
    s.den = this->den*f.den;
    return s;
}

Fraction Fraction::operator*(const Fraction& f){
	Fraction m;
    m.num = this->num * f.num;
    m.den = this->den * f.den;
    return m;
}

Fraction Fraction::operator/(const Fraction& f){
	Fraction d;
    d.num = this->num * f.den;
    d.den = this->den * f.num;
    return d;
}

std::ostream& operator<<(std::ostream& out, const Fraction& f){
	out << f.num << "/" << f.den << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Fraction& f){
	int n, d;
	in>>n;
	in>>d;
	if(d == 0){
		throw std::string("Invalid data or logical error");
	} else {
		f.num = n;
		f.den = d;
	}
	return in;
}

Fraction Fraction::operator=(const Fraction& f){
	Fraction e;
    e.num = f.num;
    e.den=f.den;

    return e;
}

void Fraction::print(){
	std::cout << num << "/" << den << std::endl;
}
