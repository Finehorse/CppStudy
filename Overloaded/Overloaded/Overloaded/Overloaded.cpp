/*
	���صĶ��壺
	�������ϵĺ���,ȡ��ͬ�ĺ������������βεĸ����������Ͳ�ͬ���༭������ʵ�κ��βε������Լ����������ƥ�䣬
	�Զ�ȷ�������Ǹ�������

	�����������β���/�������ͽ������֡�

	�����C++��ʹ��C���ԵĻ���
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