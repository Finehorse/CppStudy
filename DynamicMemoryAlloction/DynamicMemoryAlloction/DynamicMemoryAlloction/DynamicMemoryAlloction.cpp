/*
	C: mallco/free  �Ǻ�������
	C++: new/delete  �������

	�ڴ�������䣺
		ȫ�ֱ���/��̬����/����  data area
		�������Ա�����ͷǳ�Ա��������  code area
		Ϊ���к���������ľֲ�����/��������/��������/���ص�ַ  stack area
		��̬�ڴ�ֲ���  heap area  ~��
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

//ȫ�ֱ���
TestA A;
TestB B;

int foo(void){
	cout << "foo()-----------------"<<endl;
	//A�Ĺ��캯�������á�
	TestA a;
	//B�Ĺ��캯�������á�
	static TestB b;
	cout << "~foo()-----------------" << endl;
	return 0;
}

int main(int argc, char *argv[]){

	cout << "main()-----------------" << endl;
	foo();//A �Ĺ��졣������B�Ĺ���
	foo();//A�Ĺ��졣����
	cout << "~main()-----------------" << endl;
	system("pause");
	//B����������2��
	//A����������1��
}