/*
	����������
		Ϊ�˼��ٺ������õĳɱ���������������������

	�������ڿ�ʼ��������һ�Ρ�
	�ڵ���֮ǰ����������

	��������:
		���ܺ��и��ӵĽṹ��������
*/
#include<iostream>
using namespace std;
#define MAX(a,b) ((a)>(b))?(a):(b)
#define square(x) ((x)*(x))


inline bool isnumber(char c);
inline int max(int a, int b);

int main(int argc,char * argv[]){
	
	char c;
	cout << "�����������ԣ�" << endl;
	while ((c = cin.get()) != 'q'){
		if (isnumber(c))
			cout << "you entered a digit !" << endl;
		else
			cout << "you entered a non-digit !" << endl;
	}

	cout << "�궨������������ıȽ�" << endl;
	int a = 55;
	int b = 4;

	int e = square(2 + 3);
	cout <<"square(2 + 3)"<< e << endl;

	int r = max(a++, b);
	cout <<"max(a++, b)" <<r << endl;

	int d = MAX(a++, b);
	cout <<"MAX(a++, b)" << d << endl;
	cout << "a "<< a<< endl;
	getchar();
	getchar();
}


inline bool isnumber(char c){
	return (c >= '0'&&c <= '9') ? true : false;
}

inline int max(int a, int b){
	return a > b ? a : b;
}
