#include<iostream>
using namespace std;
//int main() {
//	int a=1;
//	{
//		int b = 2;
//	}
//	a = b;//此时汇报错，因为花括号是一个作用域
//	return 0;
//}

int global;
static int one_file;

int main() {
	return 0;
}
void fun1() {
	static int count;
	int a = 0;
}

/*
global是外部链接性，其他的文件也可以调用
one_file是内部链接性，只有这个文件可以用，但是是全局变量
count没有链接性，只有在fun1函数中可以用
三者全是静态变量，贯穿该文件，不会消失，直到程序结束
*/


