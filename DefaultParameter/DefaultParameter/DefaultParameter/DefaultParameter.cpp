/*
	形参分布中，从右到左逐渐定义
	调用顺序中，只能向左匹配参数
*/

#include<iostream>
using namespace std;

void foo(int a, int b = 0, int c = 0);

int main(){
	
	//不成立：foo();
	foo(20);
	foo(20, 30);
	foo(20, 30,40);
	//不成立foo(20, 30, , 40);
	getchar();
}
void foo(int a, int b, int c){ 
	cout << "a=" << a << " b=" << b << " c=" << c <<endl;
}