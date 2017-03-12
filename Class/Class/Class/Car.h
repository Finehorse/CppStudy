#ifndef _CAR_H_
#define _CAR_H_
class Car{

public:
	void run();
	void stop();
	void setProperty(int price, int carnum);
private:
	int m_price;
	int m_carnum;
};
	
#endif