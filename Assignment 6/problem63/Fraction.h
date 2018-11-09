/*
CH08-320143
a6 p1.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
	private:
		int num, den;
		std::string fraction;
	public:
		Fraction();
		Fraction(int, int = 1);
		Fraction(const std::string&);
		Fraction(const Fraction&);

		bool operator<(const Fraction&);
		bool operator<=(const Fraction&);
		bool operator>(const Fraction&);
		bool operator>=(const Fraction&);
		bool operator==(const Fraction&);
		bool operator!=(const Fraction&);

		Fraction operator+(const Fraction&);
		Fraction operator-(const Fraction&);
		Fraction operator*(const Fraction&);
		Fraction operator/(const Fraction&);

		friend std::ostream& operator<<(std::ostream&, const Fraction&);
		friend std::istream& operator>>(std::istream&, Fraction&);

		Fraction operator=(const Fraction&);

		void print();
};
#endif