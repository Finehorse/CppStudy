/*
	�βηֲ��У����ҵ����𽥶���
	����˳���У�ֻ������ƥ�����
*/

#include<iostream>
using namespace std;

void foo(int a, int b = 0, int c = 0);

int main(){
	
	//��������foo();
	foo(20);
	foo(20, 30);
	foo(20, 30,40);
	//������foo(20, 30, , 40);
	getchar();
}
void foo(int a, int b, int c){ 
	cout << "a=" << a << " b=" << b << " c=" << c <<endl;
}