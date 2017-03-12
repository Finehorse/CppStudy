/*
	面向对象程序设计：
		程序：对象+对象（C语言是：算法+数据结构）

	类：类是创建对象的模板和蓝图
	对象：对象是类的实例化结果

	对象三大特性
		行为，状态，标识。


	类内部可以进行重载。
	在类内部的函数可以设置默认参数
	可以在类声明外部进行定义函数。
*/

#include<iostream>
using namespace std;
#include"Car.h"

int main(int argc, char *argv[]){

	Car myCar;
	myCar.setProperty(100, 100);
	myCar.run();
	myCar.stop();
	getchar();
	return 0;
}