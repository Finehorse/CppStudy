/*
	���ͱ��
		�������κ��ض����͵ķ�ʽ��д����

*/
#include<iostream>
using namespace std;

//һ���򵥵�����
template <typename T>
T abs(T x){
	return x < 0 ? -x : x;
}

int main(int argc, char *argv[]){

	int n = 5;
	double d = 5.5;

	cout << abs(n) << endl;
	cout << abs(d) << endl;
	getchar();
}