/*
	C�������ǰ�ֵ���ݵģ�����Ч�ʲ����Ǻܸߡ�
	C++�����У�
		��ֵ���ݵ�
		�����ô��ݣ����Ա�����������ݿ������������Ч�ʡ�


	���ú�ָ��Ĳ��
		ָ���Ǹ����������Խ����ٸ�ֵ��
		���ñ�����г�ʼ�������ǲ��ܽ����ٸ�ֵ

	void û���������
	���ò���Ϊ���顣
	û�����õ�ָ�룬û�����õ����á�
	�п�ָ�뵫��û�п�����


	��������ʱ���ɺ����ĸ�������������ʱ�����غ����ĸ���������Ч��Ҫ��һЩ��

*/
#include<iostream>
using namespace std;

void foo(int val){
	val = 10;
}
void bar(int& pval){
	pval = 10;
}
void zoo(int * pval){
	*pval = 10;
}



int main(int argc,char *argv[]){

	int intone = 0;
	int & Rintone = intone;

	intone = 5;

	cout << intone << endl;
	cout << Rintone << endl;

	Rintone = 7;
	cout << intone << endl;
	cout << Rintone << endl;

	cout << &(intone) << endl;
	cout << &(Rintone) << endl;

	getchar();


	int a = 1;
	int b = 1;
	int c = 1;
	
	foo(a);
	bar(b);
	zoo(&c);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	getchar();
}