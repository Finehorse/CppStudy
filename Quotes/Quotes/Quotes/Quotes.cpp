/*
	C语言中是按值传递的，但是效率并不是很高。
	C++语言中：
		按值传递的
		按引用传递：可以避免大量的数据开销，可以提高效率。


	引用和指针的差别：
		指针是个变量，可以进行再赋值；
		引用必须进行初始化，但是不能进行再赋值

	void 没有这个引用
	引用不能为数组。
	没有引用的指针，没有引用的引用。
	有空指针但是没有空引用


	函数返回时生成函数的副本，但是引用时不返回函数的副本，所以效率要高一些。

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