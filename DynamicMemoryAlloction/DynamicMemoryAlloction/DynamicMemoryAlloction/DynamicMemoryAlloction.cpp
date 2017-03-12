/*
	C: mallco/free  是函数调用
	C++: new/delete  是运算符

	内存区域分配：
		全局变量/静态数据/常量  data area
		所有类成员函数和非成员函数代码  code area
		为运行函数而分配的局部变量/函数参数/返回数据/返回地址  stack area
		动态内存分布区  heap area  ~堆
*/
#include<iostream>

using namespace std;

class TestA{
public:
	TestA(){
		cout << "TestA" << endl;
	}
	~TestA(){
		cout << "~TestA" << endl;
	}
};

class TestB{
public:
	TestB(){
		cout << "TestB" << endl;
	}
	~TestB(){
		cout << "~TestB" << endl;
	}
};

//全局变量
TestA A;
TestB B;

int foo(void){
	cout << "foo()-----------------"<<endl;
	//A的构造函数被调用。
	TestA a;
	//B的构造函数被调用。
	static TestB b;
	cout << "~foo()-----------------" << endl;
	return 0;
}

int main(int argc, char *argv[]){

	cout << "main()-----------------" << endl;
	foo();//A 的构造。析构。B的构造
	foo();//A的构造。析构
	cout << "~main()-----------------" << endl;
	system("pause");
	//B的析构调用2次
	//A的析构调用1次
}