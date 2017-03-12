/*
	内联函数：
		为了减少函数调用的成本，所以引入内联函数。

	声明：在开始进行声明一次。
	在调用之前进行声明。

	函数限制:
		不能含有复杂的结构体控制语句
*/
#include<iostream>
using namespace std;
#define MAX(a,b) ((a)>(b))?(a):(b)
#define square(x) ((x)*(x))


inline bool isnumber(char c);
inline int max(int a, int b);

int main(int argc,char * argv[]){
	
	char c;
	cout << "内联函数测试：" << endl;
	while ((c = cin.get()) != 'q'){
		if (isnumber(c))
			cout << "you entered a digit !" << endl;
		else
			cout << "you entered a non-digit !" << endl;
	}

	cout << "宏定义和内联函数的比较" << endl;
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
