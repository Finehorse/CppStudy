#include<iostream>
#include"Car.h"
using namespace::std;

Car::Car(){
	pro = 10;
}
Car::Car(int p){
	pro = p;
}

void Car::print(){
	cout << pro<<endl;
}
Car::~Car(){
	cout << "Died" << endl;
}