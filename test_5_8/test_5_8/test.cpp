#include<iostream>
using namespace std;
//int main() {
//	int a=1;
//	{
//		int b = 2;
//	}
//	a = b;//��ʱ�㱨����Ϊ��������һ��������
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
global���ⲿ�����ԣ��������ļ�Ҳ���Ե���
one_file���ڲ������ԣ�ֻ������ļ������ã�������ȫ�ֱ���
countû�������ԣ�ֻ����fun1�����п�����
����ȫ�Ǿ�̬�������ᴩ���ļ���������ʧ��ֱ���������
*/


