/*
CH08-320143
a5 p3.cpp
Fatine Tazi
f.tazi@jacobs-university.de
*/
 
#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std; 

class Motor{
	public: 
		Motor() {
			throw string("This motor has problems");
		};
		~Motor() {};
};

class Car{
	private:
		Motor *motor;
	public: 
		Car(){
			motor = new Motor();
		};
		~Car() {
			delete motor;
		};
};

class Garage {
	private:
		Car *car;
	public:
		Garage(){
			try{
				car = new Car();
			}
			catch(string str){
				cout << str << endl;
			}
			throw string("The car in this garage has problems with the motor");
		};
		~Garage(){
			delete car;
		};
};

int main(){
	try{
		Garage gar;
	}
	catch(string str){
		cout << str << endl;
	}
}