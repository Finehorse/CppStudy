/*
	重载的定义：
	两个以上的函数,取相同的函数名，但是形参的个数或者类型不同，编辑器根据实参和形参的类型以及个数的最佳匹配，
	自动确定调用那个函数，

	编译器不以形参名/返回类型进行区分。

	如果在C++中使用C语言的话：
		#ifndef _FUNC_
		#define _FUNC_
		#ifdef _cplusplus
		extern "C"{
		}

		void func();
		#ifdef _cplusplus
		}
		#endif
		#endif

*/
#include<iostream>
#include<stdio.h>
using namespace std;

int square(int x){
	cout << __FILE__ << __LINE__<< endl;
	return x*x;
}
float square(float x){
	cout << __FILE__ << __LINE__<< endl;
	return x*x;
}double square(double x){
	cout << __FILE__ << __LINE__<< endl;
	return x*x;
}
int main(int argc,char *argv[]){

	cout << "int " << square(3)<<endl;
	cout << "float " << square(3.3f)<<endl;
	cout << "double " << square(3.32)<<endl;
	getchar();
}