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
//	}//��һ���ǹ��캯�����ڶ�����Ĭ�Ϲ��캯��
//	//��������
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
//	//�����ֶ��ǹ��캯����ʹ�÷���
//	/*Ϊ�ඨ���˹��캯���󣬳���Ա�ͱ���Ϊ���ṩĬ�Ϲ��캯����
//	����ṩ�˷�Ĭ�Ϲ��캯������Student(string s, int n, double a)��
//	��û���ṩĬ�Ϲ��캯���������������������
//	Student stu4;//����
//	*/
//	stu1.compare_score(stu2).printf_score();
//	//stu1.compare_score(stu2)���ص� ��һ�����󣬺����Ƕ���.����������
//	return 0;
//}



//�������ݵı���

//���峣����

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
//	//�����ֶ��Ƕ��峣����
//	//t1.get_time()��t2.get_time()���Ǵ�ģ�����ʹ��
//	t1.get_time_2();
//	t2.get_time_2();
//	//���������Է��ʳ����󣬵������޸����е�ֵ
//	//���ڳ������б���Ҫ�޸ĵ�ֵ��������mutable ������
//	//����mutable int count
//	//��ʱconst���εĺ��������޸�count
//}



//���峣�����Ա
//class Time {
//	const int hour;//����hour�����ݳ�Ա
//	/*Time(int h) {
//		hour = h;
//	}*/ //�Ƿ������ܸ�ֵ
//	void get_time() const {}//��������Ա
//};

//������Ϊ��ĳ���
//class Bakery {
//	//const int Months = 12;//����ʱ����д���Ǹ���������ᱨ��
//	// ��Ϊ������ֻ�������˶������ʽ����û�д�������
//	// ��ˣ��ڴ�������ǰ����û�����ڴ洢ֵ�Ŀռ�
//	
//
//	//��һ�ַ���
//	/*enum {
//		Months = 12
//	};*///ö�٣�Months����30
//	//�ڶ��ַ��� 
//	static const int Months = 12;
//	//�⽫����һ����ΪMonths�ĳ�����
//	// �ó�������������̬�����洢��һ�𣬶����Ǵ洢�ڶ�����
//	double cost[Months];
//};