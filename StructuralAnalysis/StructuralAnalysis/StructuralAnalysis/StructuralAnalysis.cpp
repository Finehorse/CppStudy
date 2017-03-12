/*
	构造函数：
		声明变量，赋初值
	完成对象初始化的函数只能为类的内部函数来进行。
	建立对象的同时，自动完成调用构造函数。
	用类名作为类对象的构造函数。

	C++建立和初始化对象的 过程专门由该类的构造函数来完成
	构造函数给对象分配空间和初始化
	如果有一个类专门定义构造函数，那么C++就仅仅创建对象而不做任何初始化


	构造函数的初始化列表：
		student::student(int id):m_id(id){  //列表的顺序必须和定义的顺序一致。
			cout<<"Done"<<endl;
		}

	隐式的转换是可以使用的：必须是变量的性质可以转换。 explicit
*/
/*
	析构函数：不能任意调用，没有参数，没有返回值，不能重载。
*/

#include<iostream>
using namespace std;
#include"Car.h"

int main(int argc, char *argv[]){
	
	//析构函数以及默认构造函数的测试
	{
		Car car1;
		car1.print();
	}
	//构造函数测试
	Car car2(100);
	car2.print();
	getchar();
}
