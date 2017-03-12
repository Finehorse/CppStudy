#include<iostream>
#include"Car.h"
using namespace std;

void Car::run(){
	cout << "run" << endl;
}
void Car::stop(){
	cout << "stop" << endl;
}
void Car::setProperty(int price, int Carnum){
	m_price = price;
	m_carnum = Carnum;
}