/*
	泛型编程
		独立于任何特定类型的方式编写代码

*/
#include<iostream>
using namespace std;

//一个简单的例子
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