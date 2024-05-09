#include<iostream>
using namespace std;
//class Student {
//private:
//	string name;
//	int age;
//	double score;
//public:
//	Student(string s, int n, double a) {
//		name = s;
//		age = n;
//		score = a;
//	}
//	Student() {
//		name = "no name";
//		age = 0;
//		score = 0;
//	}//第一种是构造函数，第二种是默认构造函数
//	//析构函数
//	Student compare_score(const Student& s) const {
//		if (score > s.score) {
//			return *this;
//		}
//		else
//			return s;
//	}
//	void printf_score() {
//		cout << score;
//	}
//	~Student() {}
//};
//int main() {
//	Student stu1 = Student("lihua", 18, 98.5);
//	Student stu2("zhangsan", 18, 30.5);
//	Student* stu3 = new Student("lisi", 16, 77.5);
//	Student stu4 = Student();
//	//这三种都是构造函数的使用方法
//	/*为类定义了构造函数后，程序员就必须为它提供默认构造函数。
//	如果提供了非默认构造函数，如Student(string s, int n, double a)；
//	但没有提供默认构造函数，则下面的声明将出错：
//	Student stu4;//错误
//	*/
//	stu1.compare_score(stu2).printf_score();
//	//stu1.compare_score(stu2)返回的 是一个对象，后面是对象.函数（）；
//	return 0;
//}



//共用数据的保护

//定义常对象

//class Time {
//private:
//	int hour;
//	int month;
//	int second;
//public:
//	Time(int h, int m, int s) {
//		hour = h;
//		month = m;
//		second = s;
//	}
//	void get_time() {
//		cout << hour << ":" << month << ":" << second;
//	}
//	void get_time_2() const {
//		cout << hour << ":" << month << ":" << second;
//	}
//};
//int main() {
//	Time const t1(12, 34, 46);
//	const Time t2(5, 16, 24);
//	//这两种都是定义常对象
//	//t1.get_time()和t2.get_time()都是错的，不能使用
//	t1.get_time_2();
//	t2.get_time_2();
//	//常函数可以访问常对象，但不能修改其中的值
//	//对于常对象中必须要修改的值，可以用mutable 来修饰
//	//比如mutable int count
//	//此时const修饰的函数可以修改count
//}



//定义常对象成员
//class Time {
//	const int hour;//定义hour常数据成员
//	/*Time(int h) {
//		hour = h;
//	}*/ //非法，不能赋值
//	void get_time() const {}//常函数成员
//};

//作用域为类的常量
//class Bakery {
//	//const int Months = 12;//若此时这样写，那个下面数组会报错
//	// 因为声明类只是描述了对象的形式，并没有创建对象。
//	// 因此，在创建对象前，将没有用于存储值的空间
//	
//
//	//第一种方法
//	/*enum {
//		Months = 12
//	};*///枚举，Months代表30
//	//第二种方法 
//	static const int Months = 12;
//	//这将创建一个名为Months的常量，
//	// 该常量将与其他静态变量存储在一起，而不是存储在对象中
//	double cost[Months];
//};